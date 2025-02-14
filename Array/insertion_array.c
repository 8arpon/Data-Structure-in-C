#include<stdio.h>
int size = 0;
int insertion(int ar[], int index, int value, int capacity){
    if(size >= capacity){
        printf("Not enough space!\n");
        return -1;
    }
    for(int i = size - 1; i >= index; i--){
        ar[i + 1] = ar[i];
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
int main(void)
{
    int ar[100] = {18, 8, 7, 10, 5, 17, 14};
    for(int i = 0; i < 100; i++){
        if(ar[i] == '\0'){
            break;
        }
        else{
            size++;
        }
    }
    printf("Before inserting element: ");
    show(ar);
    insertion(ar, 3, 4, 100);
    size++;
    printf("After inserting element: ");
    show(ar);
    
    return 0;
}