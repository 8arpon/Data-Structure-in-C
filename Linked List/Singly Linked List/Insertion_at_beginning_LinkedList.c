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
a *insertBeginning(a *head, int data){
    a *ptr = (a*) malloc(sizeof(a));
    ptr -> data = data;
    ptr -> link = head;
    head = ptr;
    return head;

}
int main(){
    a *head, *second, *third, *fourth, *fifth, *sixth, *seventh;
    head = (a*) malloc(sizeof(a));
    second = (a*) malloc(sizeof(a));
    third = (a*) malloc(sizeof(a));
    fourth = (a*) malloc(sizeof(a));
    fifth = (a*) malloc(sizeof(a));
    sixth = (a*) malloc(sizeof(a));
    seventh = (a*) malloc(sizeof(a));

    head -> data = 18;
    head -> link = second;
    second -> data = 8;
    second -> link = third;
    third -> data = 7;
    third -> link = fourth;
    fourth -> data = 10;
    fourth -> link = fifth;
    fifth -> data = 5;
    fifth -> link = sixth;
    sixth -> data = 17;
    sixth -> link = seventh;
    seventh -> data = 14;
    seventh -> link = NULL;

    printf("Before Inserting data: ");
    show(head);
    head = insertBeginning(head, 1);
    head = insertBeginning(head, 3);
    printf("After Inserting data: ");
    show(head);


    return 0;
}