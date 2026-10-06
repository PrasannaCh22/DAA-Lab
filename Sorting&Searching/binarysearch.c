//binarysearch
#include<stdio.h>
int binarysearch(int arr[],int n,int key){
    int low   = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]<key){
            low = mid+1;
        }
        else{
            high  = mid - 1;
        }
       
    }
     binarysearch(arr,n,key);
    return -1;
}

int main(){
    int n ;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the sorted elements in the array:");
    for(int  i =0;i<n;i++){
        scanf("%d",&arr[i]); 
    }
    int key;
    printf("Enter the element to be searched:");
    scanf("%d",&key);
    int result = binarysearch(arr,n,key);
    if(result != -1){
        printf("Element is found at index %d",result);
    }
    else{
        printf("Element is not found");
    }
}