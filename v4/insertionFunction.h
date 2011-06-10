/* The header for all the insertion functions. */
#include "structures.h"

is_TypeSpecifier* insert_TypeSpecifier( is_Typename* typeName, int line);
is_Typename* insert_Typename( is_PrimitiveType type);
is_ProgramFile* insert_ProgramFile(is_ClassHeader *classHeader, is_FieldDeclaration_list *fieldDeclarations);
is_ClassHeader* insert_ClassHeader(char *ID, int line);
is_FieldDeclaration_list* insert_FieldDeclaration_list(is_FieldDeclaration_list* list, is_FieldDeclaration* fD);
is_FieldDeclaration* insert_FieldDeclaration_AttrDeclaration(is_AttrDeclaration* declaration, int line);
is_FieldDeclaration* insert_FieldDeclaration_MethodDeclaration(is_MethodDeclaration* declaration, int line);
is_AttrDeclaration* insert_AttrDeclaration( is_TypeSpecifier* typeS, is_VariablesDeclarator_list* vD_list, int line);
is_VariablesDeclarator_list* insert_VariablesDeclarator_list(is_VariablesDeclarator_list* list, is_VariablesDeclarator* vD);
is_VariablesDeclarator* insert_VariablesDeclarator(char *id, is_Expression* exp, int line);
is_MethodDeclaration* insert_MethodDeclaration(is_TypeSpecifier* typeS, is_MethodDeclarator* methodD, is_Block* block, int line);
is_MethodDeclarator* insert_MethodDeclarator(char *id, is_Parameters_list* list, int line);
is_Parameters_list* insert_Parameters_list(is_Parameters_list* list, is_Parameter* par);
is_Parameter* insert_Parameter(char *id, is_TypeSpecifier* typeS, int line);
is_Block* insert_Block(is_LocalVariableDeclarationsOrStatements_list* list);
is_LocalVariableDeclarationsOrStatements_list* insert_LocalVariableDeclarationsOrStatements_list(is_LocalVariableDeclarationsOrStatements_list* list, is_LocalVariableDeclarationsOrStatements* lvdos);
is_LocalVariableDeclarationsOrStatements* insert_LocalVariableDeclarationsOrStatements_LocalVariableDeclarationStatement(is_LocalVariableDeclarationStatement* lvds, int line);
is_LocalVariableDeclarationsOrStatements* insert_LocalVariableDeclarationsOrStatements_Statement(is_Statement* statement, int line);
is_LocalVariableDeclarationStatement* insert_LocalVariableDeclarationStatement(is_TypeSpecifier* typeS, is_VariablesDeclarator_list* list, int line);
is_Statement* insert_Statement_LabeledStatement(is_LabeledStatement* labeled);
is_Statement* insert_Statement_Expression(is_Expression* exp);
is_Statement* insert_Statement_SelectionStatement(is_SelectionStatement* selection);
is_Statement* insert_Statement_IterationStatement(is_IterationStatement* iteration);
is_Statement* insert_Statement_JumpStatement(is_JumpStatement* jump);
is_Statement* insert_Statement_Block(is_Block* block);
is_LabeledStatement* insert_LabeledStatement_CASE(is_LocalVariableDeclarationsOrStatements *lvdos, is_ConditionalExpression* exp, int line);
is_LabeledStatement* insert_LabeledStatement_DEFAULT(is_LocalVariableDeclarationsOrStatements *lvdos, int line);
is_SelectionStatement* insert_SelectionStatement_IF(is_Expression* exp, is_Statement* stat, int line);
is_SelectionStatement* insert_SelectionStatement_IFELSE(is_Expression* exp, is_Statement* stat, is_Statement* statTwo, int line);
is_SelectionStatement* insert_SelectionStatement_SWITCH(is_Expression* exp, is_Block* block, int line);
is_IterationStatement* insert_IterationStatement_WHILE(is_Expression* exp, is_Statement* stat, int line);
is_IterationStatement* insert_IterationStatement_DO(is_Expression* exp, is_Statement* stat, int line);
is_IterationStatement* insert_IterationStatement_FOR(is_Expression* exp, is_Statement* stat, is_ForInit* forInit, is_Expressions_list *forIncr, int line);
is_ForInit* insert_ForInit(is_Expressions_list* list, is_LocalVariableDeclarationStatement* lvds);
is_Expressions_list* insert_Expressions_list(is_Expressions_list* list, is_Expression* exp);
is_Expression* insert_Expression_ConditionalExpression(is_ConditionalExpression *cExpression, int line);
is_Expression* insert_Expression_AssignmentExpression(is_AssignmentExpression *aExpression, int line);
is_Expression* insert_Expression_Expression(is_Expression *expression, int line);
is_JumpStatement* insert_JumpStatement_BREAK(int line);
is_JumpStatement* insert_JumpStatement_CONTINUE(int line);
is_JumpStatement* insert_JumpStatement_RETURN(int line);
is_JumpStatement* insert_JumpStatement_RETURN_EXP(is_Expression* exp, int line);
is_MethodCall* insert_MethodCall(char *id, is_Expressions_list* list, int line);
is_SystemOutPrintln* insert_SystemOutPrintln(char *literal, is_Expressions_list* list, int line);
is_UnaryExpression* insert_UnaryExpression(is_UnaryOp op, is_BasicElement* element, int line);
is_BasicElement* insert_BasicElement_ID(char *id, int line);
is_BasicElement* insert_BasicElement_LITERAL(char *literal, int line);
is_BasicElement* insert_BasicElement_METHOD_CALL(is_MethodCall* call, int line);
is_BasicElement* insert_BasicElement_TRUE(char *literal, int line);
is_BasicElement* insert_BasicElement_FALSE(char *literal, int line);
is_BasicElement* insert_BasicElement_INTEGER(int i, int line);
is_BasicElement* insert_BasicElement_FLOATPOINT(double d, int line);
is_BasicElement* insert_BasicElement_ARGS(int i, int line);
is_BasicElement* insert_BasicElement_PRINTLN(is_SystemOutPrintln* print, int line);
is_CastExpression* insert_CastExpression_UnaryExpression(is_TypeSpecifier* castType, is_UnaryExpression *unaryExpression, int line);
is_CastExpression* insert_CastExpression_AssignmentExpression(is_TypeSpecifier* castType,is_AssignmentExpression *assignmentExpression, int line);
is_CastExpression* insert_CastExpression_ConditionalExpression(is_TypeSpecifier* castType, is_ConditionalExpression *conditionalExpression, int line);
is_ArithmeticExpression* insert_ArithmeticExpression(is_ArithmeticOp op, is_ArithmeticExpression *firstAE, is_ArithmeticExpression *secondAE, is_CastExpression *cExpression, int line);
is_RelationalExpression* insert_RelationalExpression(is_RelationalOp op, is_ArithmeticExpression *aExpression, is_RelationalExpression *next, int line);
is_ConditionalExpression* insert_ConditionalExpression(is_ConditionalType type, is_RelationalExpression *rExpression, is_Expression *firstExp, is_Expression *secondExp, int line);
is_AssignmentExpression* insert_AssignmentExpression(char *id, is_AssignmentOp assOp, is_Expression* expression, int line);
is_ConditionalExpression* insert_ConditionalExpressionMultiple(is_ConditionalType type, is_RelationalExpression *rExpression, is_ConditionalExpression* cExpression, int line);
is_PrintExpressions_list* insert_PrintExpressions_list(is_PrintExpressions_list* list, is_BasicElement* bE);
is_SystemOutPrintln* insert_SystemOutPrintlnJavaStyle(is_PrintExpressions_list* list, int line);
