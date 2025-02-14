#include<stdio.h>
#include<stdlib.h>
#define a struct List

struct List
{
    int data;
    a *link;
};

void show(a *head){
    a *ptr = head;
    while(ptr != NULL){
        printf("%d ", ptr -> data);
        ptr = ptr -> link;
    }
    printf("\n");
}

a *deletionAtTheBeginning(a *head){
    if(head == NULL){
        printf("No values to remove\n");
        return NULL;
    }
    a *ptr = head;
    head = head -> link;
    free(ptr);
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
    fourth -> link = NULL;

    show(head);
    head = deletionAtTheBeginning(head);
    show(head);
    head = deletionAtTheBeginning(head);
    show(head);
    head = deletionAtTheBeginning(head);
    show(head);
    head = deletionAtTheBeginning(head);
    show(head);
    head = deletionAtTheBeginning(head);
    show(head);
    head = deletionAtTheBeginning(head);
    show(head);


    return 0;
}