#include<stdio.h>
#include<stdlib.h>
#define a struct List

struct List{
    int data;
    a *link;
};

void show(a *head){
    a *ptr = head;
    while(ptr -> link != head){
        printf("%d ", ptr -> data);
        ptr = ptr -> link;
    }
    printf("%d", ptr -> data);
    printf("\n");
}

a *insertionAtEnd(a *head, int value){
    a *newNode = (a*) malloc(sizeof(a));
    newNode -> data = value;
    a *tempNode = head;
    while(tempNode -> link != head){
        tempNode = tempNode -> link;
    }

    tempNode -> link = newNode;
    newNode -> link = head;
    return head;
}

int main(){
    a *head, *second, *third, *fourth;
    head = (a*) malloc(sizeof(a));
    second = (a*) malloc(sizeof(a));
    third = (a*) malloc(sizeof(a));
    fourth = (a*) malloc(sizeof(a));

    head -> data = 18;
    head -> link = second;

    second -> data = 8;
    second -> link = third;

    third -> data = 7;
    third -> link = fourth;

    fourth -> data = 10;
    fourth -> link = head;

    show(head);
    insertionAtEnd(head, 14);
    show(head);
    insertionAtEnd(head, 15);
    show(head);

    return 0;
}