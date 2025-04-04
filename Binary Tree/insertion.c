#include<stdio.h>
#include<stdlib.h>
#define a struct Tree

a{
    int data;
    a *right;
    a *left;
};

a *newNode(int value){
    a *newN = (a*) malloc(sizeof(a));
    newN -> data = value;
    newN -> left = NULL;
    newN -> right = NULL;
    return newN;
}
a *insertion(a *root, int value){
    if(root == NULL){
        return newNode(value);
    }
    if(root -> data > value){
        root -> left = insertion(root -> left, value);
    }
    else if(root -> data < value){
        root -> right = insertion(root -> right, value);
    }
    return root;
}
 
void traverseTree(a *root){
    if(root != NULL){
        traverseTree(root -> left);
        printf("%d ", root -> data);
        traverseTree(root -> right);
    }
}

int main(){
    a *root = NULL;
    while(1){
        int input;
        printf("Enter a Number to input it in the Tree: (-1 to terminate the program)\n");
        scanf("%d", &input);
        if(input == -1){
            break;
        }
        root = insertion(root, input);
    }
    traverseTree(root);

    return 0;
}