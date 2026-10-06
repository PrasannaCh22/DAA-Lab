//reverse an array
#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of elements in the array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Reverse of Array:");
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
}