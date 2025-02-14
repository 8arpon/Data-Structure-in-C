#include<stdio.h>
int arraySize = 0;
 
void show(int arr[]){
    for(int i = 0; i < arraySize; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void sortedArr(int arr[]){
    int temp;
    for(int i = 0; i < arraySize; i++){
        for(int j = i + 1; j < arraySize; j++){
            if(arr[i] > arr[j]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
int main(void){
    int arr[100] = {18, 8, 7, 10, 5, 17, 14};
    for(int i = 0; i < 100; i++){
        if(arr[i] == '\0'){
            break;
        }
        arraySize++;
    }
    sortedArr(arr);
    show(arr);

    return 0;
}