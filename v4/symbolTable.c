#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "symbolTable.h"

extern progEnv *pEnv;

/* Insert a new identifier at the tail of symbols linked list. */
tableElement *insertSymbol(char *str, int offset, tableBasicTypes t, environmentList *environment, is_Expression* exp, bool isMethod)
{
	/* Make sure we don't have conflicting scopes for this variable. */
	if (searchInMethodScope(str, environment))
		return NULL;
	
	tableElement *newSymbol = (tableElement*) malloc (sizeof(tableElement));
	tableElement *aux;
	tableElement* previous;

	strcpy(newSymbol->name, str);
	newSymbol->type = t;
	newSymbol->next = NULL;
	newSymbol->isMethod = isMethod;	
	newSymbol->offset = offset;

	/* If the table has already some elements. */
	if(environment->locals)
	{	
		/* Look for an element and verifies if it already exists. */
		for(aux = environment->locals; aux; previous = aux, aux = aux->next)
			if(strcmp(aux->name, str) == 0)
				/* We may have a method and a variable with the same name,
				 * so we ought to distinguish this case.
				 */
				if (isMethod == aux->isMethod)
				{
					/* We have to deallocate the previously reserved space. */
					free(newSymbol);
					return NULL;
				}
		
		/* Adds the element to the end of the list. */
		previous->next=newSymbol;
	}
	/* It's the first symbol. */
	else
		environment->locals = newSymbol;	
			
	/* If we are inserting a method, we have to create its corresponding
	 * environment.
	 */
	if (isMethod)
	{
		environmentList *env = malloc(sizeof(environmentList));
		
		strcpy(env->name, str);
		env->locals = NULL;
		env->next = NULL;
		env->parent = NULL;
		
		/* It's the first method. */
		if (pEnv->methods == NULL)
			pEnv->methods = env;
		else
		{
			/* Inserts at the tail of the list. */
			environmentList *aux;
			for (aux = pEnv->methods; aux->next != NULL; aux = aux->next);
			aux->next = env;
		}
	}
	
	return newSymbol; 
}

/* Looks for a given identifier. Returns 0 if it already exists. */
tableElement *searchSymbolLocal(char *str, environmentList *environment)
{
	tableElement *aux = environment->locals;
	environmentList *currentEnv;
	
	for (currentEnv = environment; currentEnv; currentEnv = currentEnv->parent)
		for(aux = currentEnv->locals; aux; aux = aux->next)
			/* We are only looking for variables with this name, not methods. */
			if(strcmp(aux->name, str) == 0 && !aux->isMethod)
				return aux;
	
	/* If we didn't find it at the scope of the method, we will look at the
	 * global scope.
	 */
	return searchSymbolGlobal(str, false);
}

/* Looks for a variable in the global list. */
/* We may be looking for a method or for a common variable. */
tableElement *searchSymbolGlobal(char *str, bool isMethod)
{
	tableElement *aux;

	for(aux = pEnv->globalTable->locals; aux; aux = aux->next)
		if(strcmp(aux->name, str) == 0 && aux->isMethod == isMethod)
			return aux;

	return NULL;
}

/* Looks for a method in the global list. */
tableElement *searchMethodCall(is_MethodCall *mD)
{
	tableElement *aux;
	
	for(aux = pEnv->globalTable->locals; aux; aux = aux->next)
		/* We have found the name of the method. */
		if(aux->isMethod && strcmp(aux->name, mD->id) == 0)
			return aux;
	
	return NULL;
}

/* Given a name of a method, returns its environment. */
environmentList *searchEnvironment(char *str)
{
	environmentList *aux;

	for(aux = pEnv->methods; aux; aux = aux->next)
		if(strcmp(aux->name, str) == 0)
			return aux;

	return NULL;
}

/* Creates a new environment for a scope. */
environmentList *createNewEnvironment(environmentList *parent)
{
	environmentList *env = malloc(sizeof(environmentList));
	env->locals = NULL;
	env->parent = parent;
	
	return env;
}

/* This method goes through all the individual scopes inside the methods
 * and assures that we don't have conflicting variables.
 */
bool searchInMethodScope(char *str, environmentList *environment)
{
	tableElement *aux = environment->locals;
	environmentList *currentEnv;
	
	for (currentEnv = environment; currentEnv; currentEnv = currentEnv->parent)
		for(aux = currentEnv->locals; aux; aux = aux->next)
			/* We have found a conflict. */
			if(strcmp(aux->name, str) == 0 && !aux->isMethod)
				return true;
	
	/* We didn't find any conflits inside the method scope. */
	return false;
}
