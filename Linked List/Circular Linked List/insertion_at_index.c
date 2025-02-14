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

a *insertionAtIndex(a *head, int value, int index){
    a *newNode = (a*) malloc(sizeof(a));
    a *tempNode = head;
    int i = 0;

    while(i < index - 1){
        tempNode = tempNode -> link;
        i++;
    }
    newNode -> data = value;
    newNode -> link = tempNode -> link;
    tempNode -> link = newNode;
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
    insertionAtIndex(head, 14, 2);
    show(head);


    return 0;
}