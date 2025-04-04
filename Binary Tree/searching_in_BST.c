#include<stdio.h>
#include<stdlib.h>
#define a struct Tree

struct Tree{
    int data;
    a *left;
    a *right;
};

a *newValue(int value){
    a *newNode = (a*) malloc(sizeof(a));
    newNode -> data = value;
    newNode -> left = NULL;
    newNode -> right = NULL;
    return newNode;
}

a *insertion(a *root, int value){
    if(root == NULL){
        return newValue(value);
    }
    if(root -> data > value){
        root -> left = insertion(root -> left, value);
    }
    else if(root -> data < value){
        root -> right = insertion(root -> right, value);
    }
    return root;
}

void inOrderTraversal(a *root){
    if(root != NULL){
        inOrderTraversal(root -> left);
        printf("%d ", root -> data);
        inOrderTraversal(root -> right);
    }
}

a *searchValue(a *root, int key){
    if(root == NULL){
        return NULL;
    }
    if(root -> data == key){
        return root;
    }
    else if(root -> data > key){
        return searchValue(root -> left, key);
    }
    else{
        return searchValue(root -> right, key);
    }
}

int main(){
    a *root = NULL;
    root = insertion(root, 18);
    root = insertion(root, 7);
    root = insertion(root, 5);
    root = insertion(root, 14);
    root = insertion(root, 10);
    root = insertion(root, 17);
    inOrderTraversal(root);
    printf("\n");

    a *value = searchValue(root, 10);
    if(value != NULL){
        printf("| Found: %d |\n", value -> data);
    }
    else{
        printf("Not Found");
    }

    return 0;
}
