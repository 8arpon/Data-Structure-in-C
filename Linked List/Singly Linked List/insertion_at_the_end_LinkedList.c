#include<stdio.h>
#include<stdlib.h>
#define a struct List

struct List{
    int data;
    struct List *link;
};

void show(a *ptr){
    while(ptr != NULL){
        printf("%d ", ptr -> data);
        ptr = ptr -> link;
    }
    printf("\n");
}
a *insertEnd(a *head, int data){
    a *end = (a*) malloc(sizeof(a));
    end -> data = 5;
    a *ptr = head;
    while(ptr -> link != NULL){
        ptr = ptr -> link;
    }
    ptr -> link = end;
    end -> link = NULL;
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

    printf("Before Inserting data to the End: ");
    show(head);
    insertEnd(head, 1);
    printf("After Inserting data to the End: ");
    show(head);

    return 0;
}