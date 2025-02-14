#include<stdio.h>
#include<stdlib.h>
#define a struct List

struct List{
    int data;
    a *link;
};

a *insertionAtEnd(a *head, int value){
    a *newNode = (a*) malloc(sizeof(a));
    if(head == NULL){
        head = newNode -> link;
    }
    newNode -> data = value;
    newNode -> link = NULL;
    if(head == NULL){
        head = newNode;
    }
    else{
        a *ptr = head;
        while(ptr -> link != NULL){
            ptr = ptr -> link;
        }
        ptr -> link = newNode;
    }


    return head;
}

void show(a *head){
    a *ptr = head;
    while(ptr != NULL){
        printf("%d ", ptr -> data);
        ptr = ptr -> link;
    }
    printf("\n");
}

int main(void){
    a *head;
    head = (a*) malloc(sizeof(a));
    head = NULL;
    
    while(1){
        int n;
        printf("Enter values:( -1 to exit ): ");
        scanf("%d", &n);
        if(n == -1){
            break;
        }
        insertionAtEnd(head, n);
    }
    
    show(head);
    

    return 0;
}