#include<stdio.h>
#include<stdlib.h>
#define a struct List

struct List{
    int data;
    a *nextLink;
    a *prevLink;
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

a *deletionAtBeginning(a *head){
    a *freeNode = head;
    a *tempNode = head -> nextLink;
    tempNode -> prevLink = NULL;
    head = tempNode;
    free(freeNode);
    return head;
}

int main(){
    a *head, *second, *third, *fourth;
    head = (a*) malloc(sizeof(a));
    second = (a*) malloc(sizeof(a));
    third = (a*) malloc(sizeof(a));
    fourth = (a*) malloc(sizeof(a));

    head -> prevLink = NULL;
    head -> data = 18;
    head -> nextLink = second;

    second -> prevLink = head;
    second -> data = 8;
    second -> nextLink = third;

    third -> prevLink = second;
    third -> data = 7;
    third -> nextLink = fourth;

    fourth -> prevLink = third;
    fourth -> data = 10;
    fourth -> nextLink = NULL;

    showAtForward(head);
    showAtReverse(head);

    head = deletionAtBeginning(head);
    showAtForward(head);
    
    return 0;
}