/* The header for all the insertion functions. */
#include "structures.h"

is_TypeSpecifier* insert_TypeSpecifier( is_Typename* tyoeName);
is_Typename* insert_Typename( int type);
is_ProgramFile* insert_ProgramFile(is_ClassHeader *classHeader, is_FieldDeclaration_list *fieldDeclarations);
is_ClassHeader* insert_ClassHeader(char *ID);
is_FieldDeclaration_list* insert_FieldDeclaration_list(is_FieldDeclaration_list* list, is_FieldDeclaration* fD);
is_FieldDeclaration* insert_FieldDeclaration_AttrDeclaration(is_AttrDeclaration* declaration);
is_FieldDeclaration* insert_FieldDeclaration_MethodDeclaration(is_MethodDeclaration* declaration);
is_AttrDeclaration* insert_AttrDeclaration( is_TypeSpecifier* typeS, is_VariablesDeclarator_list* vD_list);
is_VariablesDeclarator_list* insert_VariablesDeclarator_list(is_VariablesDeclarator_list* list, is_VariablesDeclarator* vD);
is_VariablesDeclarator* insert_VariablesDeclarator(char *id, is_Expression* exp);
is_MethodDeclaration* insert_MethodDeclaration(is_TypeSpecifier* typeS, is_MethodDeclarator* methodD, is_Block* block);
is_MethodDeclarator* insert_MethodDeclarator(char *id, is_Parameters_list* list);
is_Parameters_list* insert_Parameters_list(is_Parameters_list* list, is_Parameter* par);
is_Parameter* insert_Parameter(char *id, is_TypeSpecifier* typeS);
is_Block* insert_Block(is_LocalVariableDeclarationsOrStatements_list* list);
is_LocalVariableDeclarationsOrStatements_list* insert_LocalVariableDeclarationsOrStatements_list(is_LocalVariableDeclarationsOrStatements_list* list, is_LocalVariableDeclarationsOrStatements* lvdos);
is_LocalVariableDeclarationsOrStatements* insert_LocalVariableDeclarationsOrStatements_LocalVariableDeclarationStatement(is_LocalVariableDeclarationStatement* lvds);
is_LocalVariableDeclarationsOrStatements* insert_LocalVariableDeclarationsOrStatements_Statement(is_Statement* statement);
is_LocalVariableDeclarationStatement* insert_LocalVariableDeclarationStatement(is_TypeSpecifier* typeS, is_VariablesDeclarator_list* list);
is_Statement* insert_Statement_LabeledStatement(is_LabeledStatement* labeled);
is_Statement* insert_Statement_Expression(is_Expression* exp);
is_Statement* insert_Statement_SelectionStatement(is_SelectionStatement* selection);
is_Statement* insert_Statement_IterationStatement(is_IterationStatement* iteration);
is_Statement* insert_Statement_JumpStatement(is_JumpStatement* jump);
is_Statement* insert_Statement_Block(is_Block* block);
is_LabeledStatement* insert_LabeledStatement_ID(char *id, is_LocalVariableDeclarationsOrStatements *lvdos);
is_LabeledStatement* insert_LabeledStatement_CASE(is_LocalVariableDeclarationsOrStatements *lvdos, is_ConditionalExpression* exp);
is_LabeledStatement* insert_LabeledStatement_DEFAULT(is_LocalVariableDeclarationsOrStatements *lvdos);
is_SelectionStatement* insert_SelectionStatement_IF(is_Expression* exp);
is_SelectionStatement* insert_SelectionStatement_IFELSE(is_Expression* exp, is_Expression* expTwo);
is_SelectionStatement* insert_SelectionStatement_SWITCH(is_Expression* exp, is_Block* block);
is_IterationStatement* insert_IterationStatement_WHILE(is_Expression* exp, is_Statement* stat);
is_IterationStatement* insert_IterationStatement_DO(is_Expression* exp, is_Statement* stat);
is_IterationStatement* insert_IterationStatement_FOR(is_Expression* exp, is_Statement* stat,is_Expressions_list *forInitExps, is_LocalVariableDeclarationStatement *forInitStat, is_Expressions_list *forIncr);
