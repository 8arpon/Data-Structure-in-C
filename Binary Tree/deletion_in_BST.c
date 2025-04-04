#include<stdio.h>
#include<stdlib.h>
#define a struct Tree

a{
    int data;
    a *right;
    a *left;
};

a *addValue(int value){
    a *newNode = (a*) malloc(sizeof(a));
    newNode -> data = value;
    newNode -> left = NULL;
    newNode -> right = NULL;
    return newNode;
}
void traverseTree(a *root){
    if(root != NULL){
        traverseTree(root -> left);
        printf("%d ", root -> data);
        traverseTree(root -> right);
    }
}
a *insertion(a *root, int value){
    if(root == NULL){
        return addValue(value);
    }
    if(root -> data > value){
        root -> left = insertion(root -> left, value);
    }
    else if(root -> data < value){
        root -> right = insertion(root -> right, value);
    }
    return root;

}

a *in_order_predecessor(a *root){
    root = root -> left;
    while(root -> right != NULL){
        root = root -> right;
    }
    return root;
}

a *deletion(a *root, int value){
    a *tempValue;
    if(root == NULL){
        return NULL;
    }
    if(root -> data > value){
        root -> left = deletion(root -> left, value);
    }
    else if(root -> data < value){
        root -> right = deletion(root -> right, value);
    }
    else{
        if(root -> left == NULL && root -> right == NULL){
            free(root);
            return NULL;
        }
        else if(root -> left == NULL){
            a *temp = root -> right;
            free(root);
            return temp;
        }
        else if(root -> right == NULL){
            a *temp = root -> left;
            free(root);
            return temp;
        }
        else{
            tempValue = in_order_predecessor(root);
            root -> data = tempValue -> data;
            root -> left = deletion(root -> left, tempValue -> data);
        }
    }
    return root;
}


int main(){
    a *root = NULL;
    root = insertion(root, 18);
    root = insertion(root, 7);
    root = insertion(root, 5);
    root = insertion(root, 14);
    root = insertion(root, 10);
    root = insertion(root, 17);
    traverseTree(root);
    printf("\n");
    deletion(root, 5);
    traverseTree(root);

    return 0;
}