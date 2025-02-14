#include<stdio.h>
int count = 0;
int linearSearch(int arr[], int num){
    int test = 0;
    for(int i = 0; i < count; i++){
        if(arr[i] == num){
            return i;
        }
    }
    return -1;
}
int binarySearch(int arr[], int element){
    int low, mid, high;
    low = 0;
    high = count - 1;
    int test = 0;
    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] == element){
            return mid;
        }
        if(mid > element){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
 
}
void traverse(int arr[]){
    for(int i = 0; i < count; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(void){
    int arr[100] = {5, 7, 8, 10, 17, 18};
    for(int i = 0; i < 100; i++){
        if(arr[i] == '\0'){
            break;
        }
        else{
            count++;
        }
    }
    traverse(arr);
    int lSearch = linearSearch(arr, 8);
    printf("Using Linear searching method: \nPosition: %d\n", lSearch + 1);
    int bSearch = binarySearch(arr, 8);
    printf("Using Binary searching method: \nPosition: %d\n", bSearch + 1);

    return 0;
}