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

a *insertinAtBeginning(a *head, int value){
    a *newNode = (a*) malloc(sizeof(a));
    newNode -> data = value;
    a *ptr = head;
    newNode -> nextLink = ptr;
    ptr -> prevLink = newNode;
    newNode -> prevLink = NULL;
    head = newNode;
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

    head = insertinAtBeginning(head, 14);
    showAtForward(head);
    showAtReverse(head);

    return 0;
}