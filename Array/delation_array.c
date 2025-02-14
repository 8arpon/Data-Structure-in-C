#include<stdio.h>
int size = 0;
void show(int ar[]){
    for(int i = 0; i < size; i++){
        printf("%d ", ar[i]);
    }
    printf("\n");
}
void delete(int ar[], int index){
    for(int i = index; i < size; i++){
        ar[i] = ar[i + 1];
    }
}
int main(void){
    int ar[100] = {18, 8, 7, 10, 5, 17, 14};
    for(int i = 0; i < 100; i++){
        if(ar[i] == '\0'){
            break;
        }
        size++;
    }
    printf("Before Deletion: ");
    show(ar);
    printf("After deletetion: ");
    delete(ar, 3);
    size--;
    show(ar);

    return 0;
}