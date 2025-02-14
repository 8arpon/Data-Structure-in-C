#include<stdio.h>
#include<stdlib.h>
#define a struct List

struct List{
    int data;
    a *link;
};

void show(a *ptr){
    while(ptr != NULL){
        printf("%d ", ptr -> data);
        ptr = ptr -> link;
    }
    printf("\n");
}

a *updateAtIndex(a *head, int value, int index){
    a *ptr = head;
    int i = 0;
    while(i < index){
        ptr = ptr -> link;
        i++;
    }
    ptr -> data = value;
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
    int index = 2;
    int value = 14;
    updateAtIndex(head, value, index);
    show(head);

    return 0;
}