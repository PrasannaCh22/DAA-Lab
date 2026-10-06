//selection sort
#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the array:");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<n;i++){
         int midIndex = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[midIndex]){
                midIndex = j;
            }
        }
        int temp = arr[midIndex];
        arr[midIndex] = arr[i];
        arr[i] = temp;
    }
    printf("Sorted Array:");
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

