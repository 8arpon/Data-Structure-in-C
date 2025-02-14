#include<stdio.h>
int count = 0;
void traverse(int arr[]){
    for(int i = 0; i < count; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(void){
    int arr[100] = {18, 8, 7, 5, 10, 17};
    for(int i = 0; i < 100; i++){
        if(arr[i] == '\0'){
            break;
        }
        else{
            count++;
        }
    }
    traverse(arr);

    return 0;
}