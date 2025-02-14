#include<stdio.h>
int size = 0;
int update(int ar[], int index, int value){
    if(index < 0 || size >= 100){
        printf("Not enought space!");
        return -1;
    }
    ar[index] = value;
    return 1;
}
void show(int ar[]){
    for(int i = 0; i < size; i++){
        printf("%d ", ar[i]);
    }
    printf("\n");
}
int main(void){
    int ar[100] = {18, 8, 7, 10, 5, 17, 14};
    for(int i = 0; i < 100; i++){
        if(ar[i] == '\0'){
            break;
        }
        size++;
    }
    printf("Before updating element: ");
    show(ar);
    update(ar, 3, 4);
    printf("After updating element: ");
    show(ar);
}