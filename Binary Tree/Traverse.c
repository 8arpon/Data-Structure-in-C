#include<stdio.h>
#include<stdlib.h>
#define a struct Tree

a{
    int data;
    a *right;
    a *left;
};

void traverseBinaryTree(a *root){
    if(root != NULL){
        printf("%d ", root -> data);
        traverseBinaryTree(root -> left);
        traverseBinaryTree(root -> right);
    }
    printf("\n"); 
}

int main(){
    a *root = (a*) malloc(sizeof(a));
    a *r1 = (a*) malloc(sizeof(a));
    a *r2 = (a*) malloc(sizeof(a));
    a *r3 = (a*) malloc(sizeof(a));
    a *r4 = (a*) malloc(sizeof(a));
    a *r5 = (a*) malloc(sizeof(a));
    
    root -> data = 18;
    r1 -> data = 8;
    r2 -> data = 7;
    r3 -> data = 10;
    r4 -> data = 14;
    r5 -> data = 5;

    root -> left = r1;
    r1 -> left = r3;
    r1 -> right = NULL;

    root -> right = r2;
    r2 -> left = r4;
    r2 -> right = r5;
    r4 -> left = NULL;
    r4 -> right = NULL;
    r5 -> left = NULL;
    r5 -> right = NULL;
    
    traverseBinaryTree(root);

    return 0;
}