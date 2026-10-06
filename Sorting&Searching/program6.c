//Swap adjacent elements in an array
#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of elements in the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Elements in the array are:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp;
    for(int i=0;i<n-1;i+=2){
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    printf("Elements in the array after swapping:");
    for(int i = 0 ;i<n ;i++){
        printf("%d ",arr[i]);
    }
}