//count no of swaps in the bubble sort
#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Elements in the array:");
    for(int  i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int count = 0;
    for(int  i =0 ;i<n-1;i++){
        for(int  j =0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                count++;
            
            }
        }
    }
    printf("Sorted array:");
    for(int  i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("The count of swaps is %d",count);

}