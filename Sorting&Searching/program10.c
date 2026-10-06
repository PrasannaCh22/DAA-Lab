//check whether array is sorted or not
#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sorted = 1;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1])
        sorted = 0;
        break;
    }
    if(sorted == 1){
        printf("Array is sorted in ascending order.");
    }
    else{
        printf("Array is not sorted.");
    }
}