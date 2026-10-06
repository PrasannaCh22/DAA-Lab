//bubble one largest element to the end
#include<stdio.h>
int main(){
    int n ;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Elements in the array:");
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp;
    for(int i =0 ;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}
printf("Elements after the bubble sort:");
for(int i =0;i<n;i++){
    printf(" %d ",arr[i]);
}
}