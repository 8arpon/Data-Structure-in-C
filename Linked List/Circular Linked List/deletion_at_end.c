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
    printf("%d\n", ptr -> data);
}

a *deletionAtEnd(a *head){
    a *prevNode = head;
    a *endNode = head -> link;

    while(endNode -> link != head){
        endNode = endNode -> link;
        prevNode = prevNode -> link;
    }
    prevNode -> link = head;
    endNode -> link = NULL;
    free(endNode);
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
    head = deletionAtEnd(head);
    show(head);
    head = deletionAtEnd(head);
    show(head);
    head = deletionAtEnd(head);
    show(head);
    head = deletionAtEnd(head);
    show(head);

    return 0;
}