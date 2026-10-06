//find smallest element in the array
#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of elements in the arrays:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int small = arr[0];
    for(int i=1;i<=n;i++){
        if(arr[i]<small)
         small = arr[i];
    }
    printf("The largest element in the array is %d",small);
}