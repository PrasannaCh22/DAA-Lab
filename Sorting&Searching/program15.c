//Selection Sort
#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Elements in the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int midIndex;
    for(int i=0;i<n-1;i++){
        midIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[midIndex]){
                midIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[i];
        arr[i] = arr[midIndex];
        arr[midIndex] = temp;
    }
    printf("Sorted array:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}