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

a *insertionAtIndex(a *head, int value, int index){
    a *ptr = head;
    a *newNode = (a*) malloc(sizeof(a));
    newNode -> data = value;
    int i = 0;
    while(i < index - 1){
        ptr = ptr -> nextLink;
        i++;
    }
    newNode -> nextLink = ptr -> nextLink;
    newNode -> prevLink = ptr;
    ptr -> nextLink = newNode;
    ptr -> nextLink = newNode;
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

    insertionAtIndex(head, 14, 2);
    showAtForward(head);


    return 0;
}