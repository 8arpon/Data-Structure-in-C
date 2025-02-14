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
int insertion(int arr[], int index, int element, int capacity){
    if(capacity <= arraySize){
        return -1;
    }
    for(int i = arraySize - 1; i >= index; i--){
        arr[i + 1] = arr[i];
    }
    arr[index - 1] = element;
    return 1;
}
int deletion(int arr[], int index, int element){
    for(int i = index - 1; i <= arraySize - 1; i++){
        arr[i] = arr[i + 1];
        return 1;
    }
    return 0;
}
int update(int arr[], int element, int index){
    arr[index] = element;
    return 1;
}
int main(void){
    int arr[100] = {18, 8, 7, 10, 5, 17, 14};
    for(int i = 0; i < 100; i++){
        if(arr[i] == '\0'){
            break;
        }
        arraySize++;
    }
    printf("Before Sorting Array: ");
    show(arr);
    printf("After Sorting Array: ");
    sortedArr(arr);
    show(arr);
    int element, index;
    printf("Enter which value you want to add: ");
    scanf("%d", &element);
    printf("Enter the position for the number to add: ");
    scanf("%d", &index);
    insertion(arr, index, element, 100);
    arraySize++;
    printf("After inserting a new element: ");
    show(arr);
    deletion(arr, index, element);
    printf("Write a number to update: ");
    int index2, element2;
    scanf("%d", &index2);
    printf("Write the position: ");
    scanf("%d", &element2);
    update(arr, element2, index);
    show(arr);


    return 0;
}