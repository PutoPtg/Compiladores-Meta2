#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tree.h"


node* createNode(node_type nodeType, char* nodeTypeName, char* var)
{
    node* result = (node*)malloc(sizeof(node));
    result->nodeType = nodeType;
    result->nodeTypeName = (char*)malloc((strlen(nodeTypeName)+1)*sizeof(char));
    strcpy(result->nodeTypeName, nodeTypeName);
    result->var = var;
    result->numChildren = 0;
    result->children = NULL;
    result->parent = NULL;
    result->left = NULL;
    result->right = NULL;
    return result;
}

void addChild(node* parent, node* child)
{
    if(parent==NULL || child==NULL)
    {
        return;
    }
    parent->numChildren++;
    parent->children = (node**)realloc(parent->children, parent->numChildren*sizeof(node*));
    parent->children[parent->numChildren-1] = child;
    child->parent = parent;
    node* aux = child;
    while((aux = aux->right) != NULL)
    {
        parent->numChildren++;
        parent->children = (node**)realloc(parent->children, parent->numChildren*sizeof(node*));
        parent->children[parent->numChildren-1] = aux;
        aux->parent = parent;
    }
}

void addBrother(node* left, node* right)
{
    if(left==NULL || right==NULL)
    {
        return;
    }
    node* aux = left;
    while(aux->right!=NULL)
    {
        aux = aux->right;
    }
    aux->right = right;
    right->left = aux;
    if(left->parent!=NULL)
    {
        addChild(left->parent, right);
    }
}

void printTree(node* current, int level)
{
    /*if(current==NULL)
    {
        return;
    }
    int k,i,j,conta_ponteiro;
    if(current->nodeType == DECL_node){
        for(i=1; i<current->numChildren; i++)
        {
            conta_ponteiro=0;
            while(current->children[i]!= NULL && strcmp(current->children[i]->nodeTypeName,"Pointer")==0){
                conta_ponteiro++;
                i++;
            }
            for(j=0; j<level; j++)
            {
                printf("..");
            }
            if(current->children[i]->right!=NULL && strcmp(current->children[i+1]->nodeTypeName,"IntLit")==0)
            {
                printf("ArrayDeclaration\n");
                printTree(current->children[0], level+1);
                for(k=0;k<conta_ponteiro;k++){
                    printTree(current->children[i-conta_ponteiro], level+1);
                }
                printTree(current->children[i], level+1);
                printTree(current->children[i+1], level+1);
                i++;

            }
            else{
                printf("Declaration\n");
                printTree(current->children[0], level+1);
                for(k=0;k<conta_ponteiro;k++){
                    printTree(current->children[i-conta_ponteiro], level+1);
                }
                printTree(current->children[i], level+1);
            }
            
        }
    
    }else if(strcmp(current->nodeTypeName,"FuncBody")==0){
        for(j=0; j<level; j++)
        {
            printf("..");
        }
        printf("FuncBody\n");
        for(i=0; i<current->numChildren; i++)
        {
            if(current->children[i]!=NULL && strcmp(current->children[i]->nodeTypeName,"Null")!=0){
                printTree(current->children[i],level+1);
            }
        }
    }
    else if(strcmp(current->var,"if")==0){
            int contanulls=0;
            for(i=0; i<level; i++)
            {
                printf("..");
            }
            printf("If\n");
            printTree(current->children[0],level+1);
            for(i=1; i<current->numChildren; i++)
            {
                if(strcmp(current->children[i]->nodeTypeName,"Null")!=0){
                    printTree(current->children[i], level+1);
                }else{
                    contanulls++;
                }
            }
            if(contanulls==current->numChildren-1){
                for(i=0; i<level+1; i++)
                {
                    printf("..");

                }
                printf("Null\n");
            }
            for(i=0; i<level+1; i++)
                {
                    printf("..");

                }
                printf("Null\n");

    }
    else if(strcmp(current->nodeTypeName,"StatList")==0){

            for(i=0; i<level; i++)
            {
                printf("..");
            }
            printf("StatList\n");
            for(i=0; i<current->numChildren; i++)
            {
                if(strcmp(current->children[i]->nodeTypeName,"Null")!=0){
                    printTree(current->children[i], level+1);
                }
            }

    }
    else if(strcmp(current->var,"else")==0){
            int j,contanulls=0;
            for(i=0; i<level; i++)
            {
                printf("..");
            }
            printf("If\n");
            printTree(current->children[0],level+1);
            for(i=1; i<current->numChildren && strcmp(current->children[i]->nodeTypeName,"Else")!=0; i++)
            {
                if(strcmp(current->children[i]->nodeTypeName,"Null")!=0){
                    printTree(current->children[i], level+1);
                }else{
                    contanulls++;
                }
            }
            j=i;
            if(contanulls==i-1){
                for(i=0; i<level+1; i++)
                {
                    printf("..");

                }
                printf("Null\n");
            }
            contanulls = 0;
            for(i=j+1; i<current->numChildren; i++)
            {
                if(strcmp(current->children[i]->nodeTypeName,"Null")!=0){
                    printTree(current->children[i], level+1);
                }else{
                    contanulls++;
                }
            }
            if(contanulls== (i-j-1)){
                for(i=0; i<level+1; i++)
                {
                    printf("..");

                }
                printf("Null\n");
            }
            

        }
    else if(strcmp(current->var,"for")==0){
            int contanulls=0;
            for(i=0; i<level; i++)
            {
                printf("..");
            }
            printf("For\n");
            printTree(current->children[0],level+1);
            printTree(current->children[1],level+1);
            printTree(current->children[2],level+1);

            for(i=3; i<current->numChildren; i++)
            {
                if(strcmp(current->children[i]->nodeTypeName,"Null")!=0){
                    printTree(current->children[i], level+1);
                }else{
                    contanulls++;
                }
            }
            if(contanulls==current->numChildren-3){
                for(i=0; i<level+1; i++)
                {
                    printf("..");

                }
                printf("Null\n");
            }

    }
    else{
        for(i=0; i<level; i++)
        {
            printf("..");
        }
        if(current->nodeType == ID_node)
        {
            printf("Id(%s)\n",current->var);
        }
        else if(current->nodeType == INTLIT_node)
        {
            printf("IntLit(%s)\n", current->var);
        }
        else if(current->nodeType == CHRLIT_node)
        {
            printf("ChrLit(%s)\n", current->var);
        }
        else if(current->nodeType == STRLIT_node)
        {
            printf("StrLit(%s)\n", current->var);
        }
        else
        {
            printf("%s\n", current->nodeTypeName);
        }
        for(i=0; i<current->numChildren; i++)
        {
            printTree(current->children[i], level+1);
        }
    }*/
}

void clearTree(node* current)
{
    if(current == NULL)
    {
        return;
    }
    int i;
    for(i=0; i<current->numChildren; i++)
    {
        clearTree(current->children[i]);
    }
    free(current->children);
    free(current->nodeTypeName);
    free(current->var);
    free(current);
}