/* I pledge my Honor that I have not cheated, and will not cheat, on this assignment. Michael Cerce */

#include "typecheck.h"

void typecheckProgram()
{
    for (int i = 0; i < numMainBlockLocals; ++i)
        if (mainBlockST[i].type < -1 || mainBlockST[i].type > numClasses)
        {
            printf("Invalid symbol table. \"%s\" has an illegal type. ", mainBlockST[i].varName);
            printf("Error on line %d.\n", mainBlockST[i].varNameLineNumber);
            return;
        }

    char *main_block_local;
    for (int i = 0; i < numMainBlockLocals; ++i)
    {
        main_block_local = mainBlockST[i].varName;
        for (int j = i + 1; j < numMainBlockLocals; ++j)
        {
            if (strcmp(main_block_local, mainBlockST[j].varName) == 0)
            {
                printf("\"%s\" is already declared. ", main_block_local);
                printf("Error on line %d.\n", mainBlockST[j].varNameLineNumber);
                return;
            }
        }
    }

    typeExprs(mainExprs, -1, -1);
}

int isSubtype(int sub, int super)
{
    if (sub == -4 || super == -4 || (sub == -1 && super != -1) || (sub != -1 && super == -1))
        return 0;

    if (sub == super || (sub == -2 && super >= 0))
        return 1;

    for (int i = 0; i < numClasses && sub >= 0; ++i)
    {
        if (classesST[sub].superclass == super)
            return 1;
        else
            sub = classesST[sub].superclass;
    }

    return 0;
}

int join(int t_1, int t_2)
{
    if (isSubtype(t_1, t_2))
        return t_2;
    if (isSubtype(t_2, t_1))
        return t_1;

    return join(classesST[t_1].superclass, t_2);
}

int typeExpr(ASTree *t, int classContainingExpr, int methodContainingExpr)
{
    if (t == NULL)
        return -4;
    else if (t->typ == NULL_EXPR)
        return -2;
    else if (t->typ == NAT_LITERAL_EXPR)
        return -1;
    else if (t->typ == AST_ID)
    {
        int t_1 = typeNameToNumber(t->idVal);

        for (int i = 0; i < numMainBlockLocals && t_1 == -4; ++i)
            if (strcmp(t->idVal, mainBlockST[i].varName) == 0)
                t_1 = mainBlockST[i].type;

        if (t_1 >= -1)
            return t_1;
        else
        {
            printf("\"%s\" has illegal type. ", t->idVal);
            return -4;
        }
    }
    else if (t->typ == PLUS_EXPR)
    {
        int t_1 = typeExpr(t->children->data, classContainingExpr, methodContainingExpr);
        int t_2 = typeExpr(t->children->next->data, classContainingExpr, methodContainingExpr);

        if (t_1 == -1 && t_2 == -1)
            return -1;
        else
        {
            printf("\"+\" operator only available for nat type. ");
            return -4;
        }
    }
    else if (t->typ == MINUS_EXPR)
    {
        int t_1 = typeExpr(t->children->data, classContainingExpr, methodContainingExpr);
        int t_2 = typeExpr(t->children->next->data, classContainingExpr, methodContainingExpr);

        if (t_1 == -1 && t_2 == -1)
            return -1;
        else
        {
            printf("\"-\" operator only available for nat type. ");
            return -4;
        }
    }
    else if (t->typ == TIMES_EXPR)
    {
        int t_1 = typeExpr(t->children->data, classContainingExpr, methodContainingExpr);
        int t_2 = typeExpr(t->children->next->data, classContainingExpr, methodContainingExpr);

        if (t_1 == -1 && t_2 == -1)
            return -1;
        else
        {
            printf("\"*\" operator only available for nat type. ");
            return -4;
        }
    }
    else if (t->typ == ASSIGN_EXPR)
    {
        int t_1 = typeExpr(t->children->data, classContainingExpr, methodContainingExpr);
        int t_2 = typeExpr(t->children->next->data, classContainingExpr, methodContainingExpr);

        if (isSubtype(t_2, t_1))
            return -1;
        else
        {
            printf("\"=\" operator only available for equivalant types. ");
            return -4;
        }
    }
    else if (t->typ == EQUALITY_EXPR)
    {
        int t_1 = typeExpr(t->children->data, classContainingExpr, methodContainingExpr);
        int t_2 = typeExpr(t->children->next->data, classContainingExpr, methodContainingExpr);

        if (isSubtype(t_1, t_2) == 1 || isSubtype(t_2, t_1) == 1)
            return -1;
        else
        {
            printf("\"==\" operator only available for equivalent types. ");
            return -4;
        }
    }
    else if (t->typ == GREATER_THAN_EXPR)
    {
        int t_1 = typeExpr(t->children->data, classContainingExpr, methodContainingExpr);
        int t_2 = typeExpr(t->children->next->data, classContainingExpr, methodContainingExpr);

        if (t_1 == -1 && t_2 == -1)
            return -1;
        else
        {
            printf("\">\" operator only available for nat type. ");
            return -4;
        }
    }
    else if (t->typ == AND_EXPR)
    {
        int t_1 = typeExpr(t->children->data, classContainingExpr, methodContainingExpr);
        int t_2 = typeExpr(t->children->next->data, classContainingExpr, methodContainingExpr);

        if (t_1 == -1 && t_2 == -1)
            return -1;
        else
        {
            printf("\"&&\" operator only available for two nat types. ");
            return -4;
        }
    }
    else if (t->typ == NOT_EXPR)
    {
        if (typeExpr(t->children->data, classContainingExpr, methodContainingExpr) == -1)
            return -1;
        else
        {
            printf("\"!\" operator only available for nat type. ");
            return -4;
        }
    }
    else if (t->typ == IF_THEN_ELSE_EXPR)
    {
        int t_1 = typeExpr(t->children->data, classContainingExpr, methodContainingExpr);
        int t_2 = typeExprs(t->children->next->data, classContainingExpr, methodContainingExpr);
        int t_3 = typeExprs(t->children->next->next->data, classContainingExpr, methodContainingExpr);
        int t_4;

        if (t_2 == -4 || t_3 == -4 || (t_2 == -1 && t_3 != -1) || (t_2 != -1 && t_3 == -1))
            t_4 = -4;
        else
            t_4 = join(t_2, t_3);

        if (t_1 == -1 && t_4 != -4)
            return t_4;
        else
        {
            if (t_1 != -1)
                printf("If condition must be nat type. ");
            else
                printf("Incompatible types in then and else branches. ");
            return -4;
        }
    }
    else if (t->typ == WHILE_EXPR)
    {
        int t_1 = typeExpr(t->children->data, classContainingExpr, methodContainingExpr);
        int t_2 = typeExprs(t->children->next->data, classContainingExpr, methodContainingExpr);

        if (t_1 == -1 && t_2 != -4)
            return -1;
        else
        {
            if (t_1 != -1)
                printf("While condition must be nat type. ");
            else
                printf("Invalid type in last statement of loop body. ");
            return -4;
        }
    }
    else if (t->typ == PRINT_EXPR)
    {
        int t_1 = typeExpr(t->children->data, classContainingExpr, methodContainingExpr);

        if (t_1 == -1)
            return -1;
        else
        {
            printf("\"printNat\" only available for nat type. ");
            return -4;
        }
    }
    else if (t->typ == READ_EXPR)
        return -1;
    else if (t->typ == NEW_EXPR)
    {
        int t_1 = typeExpr(t->children->data, classContainingExpr, methodContainingExpr);

        if (t_1 >= 0)
            return t_1;
        else
        {
            printf("\"new\" operator only availble for Object or declared classes. ");
            return -4;
        }
    }
    else if (t->typ == ID_EXPR)
    {
        int t_1 = typeExpr(t->children->data, classContainingExpr, methodContainingExpr);

        if (t_1 >= -1)
            return t_1;
        else
        {
            printf("%s was never declared. ", t->children->data->idVal);
            return -4;
        }
    }
    else
    {
        printf("Class functionality not supported. ");
        return -4;
    }
}

int typeExprs(ASTree *t, int classContainingExprs, int methodContainingExprs)
{
    ASTList *iterator = t->children;
    int expr_result;
    int final_expr = -5;

    while (final_expr == -5)
    {
        expr_result = typeExpr(iterator->data, classContainingExprs, methodContainingExprs);
        if (expr_result == -4)
        {
            printf("Error on line %d.\n", iterator->data->lineNumber);
            return -4;
        }

        if (iterator == t->childrenTail)
            final_expr = expr_result;

        if (t->children->next != NULL)
            iterator = iterator->next;
        else
            iterator = t->children;
    }

    return final_expr;
}