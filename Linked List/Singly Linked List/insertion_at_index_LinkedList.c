#include<stdio.h>
#include<stdlib.h>
#define a struct List

struct List{
    int data;
    struct List *link;
};

void show(a *head){
    a *ptr = head;
    while(ptr != NULL){
        printf("%d ", ptr -> data);
        ptr = ptr -> link;
    }
    printf("\n");
}

void insertAtIndex(a *head, int data, int position){
    a *value = (a*) malloc(sizeof(a));
    a *ptr = head;
    value -> data = 5;
    int i = 0;
    while(i != position - 1){
        ptr = ptr -> link;
        i++;
    }
    value -> link = ptr -> link;
    ptr -> link = value;

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
    insertAtIndex(head, 12, 3);
    show(head);

    return 0;
}