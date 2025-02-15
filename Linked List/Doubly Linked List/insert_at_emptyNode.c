#include<stdio.h>
#include<stdlib.h>
#define a struct List

struct List{
    int data;
    a *prevLink;
    a *nextLink;
};

void showAtForward(a *head){
    a *ptr = head;
    while(ptr != NULL){
        printf("%d ", ptr -> data);
        ptr = ptr -> nextLink;
    }
    printf("\n");

}

void showAtReverse(a *head){
    a *ptr = head;
    while(ptr -> nextLink != NULL){
        ptr = ptr -> nextLink;
    }
    while(ptr != NULL){
        printf("%d ", ptr -> data);
        ptr = ptr -> prevLink;
    }
    printf("\n");
}

a *insertAtEmpty(a *head, int value){
    a *tempNode = (a*) malloc(sizeof(a));
    tempNode -> prevLink = NULL;
    tempNode -> data = value;
    tempNode -> nextLink = NULL;
    head = tempNode;
    return head;

}

int main(){
    a *head = NULL;

    head = insertAtEmpty(head, 18);
    showAtReverse(head);
    return 0;
}