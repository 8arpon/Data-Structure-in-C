#include<stdio.h>
#include<stdlib.h>
#define l struct List

struct List{
    int data;
    struct List *link;
};

void traverse(l *first){
    l *ptr = first;
    while(ptr != NULL){
        printf("%d ", ptr -> data);
        ptr = ptr -> link;
    }
    printf("\n");
}

int main()
{
    l *first, *second, *third, *fourth;
    first = (l*) malloc(sizeof(l));
    second= (l*) malloc(sizeof(l));
    third = (l*) malloc(sizeof(l));
    fourth =(l*) malloc(sizeof(l));

    first -> data = 18;
    first -> link = second;

    second -> data = 8;
    second -> link = third;

    third -> data = 7;
    third -> link = fourth;

    fourth -> data = 10;
    fourth -> link = NULL;

    traverse(first);

    return 0;
}