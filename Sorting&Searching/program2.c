//Find the sum of arrays
#include <stdio.h>
int main(){
    int n;
    printf("Enter no of elements:");
    scanf("%d",&n);
    int arr[n];
    int sum = 0;
    printf("Enter the array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    printf("The sum of elements in the array is %d",sum);
}