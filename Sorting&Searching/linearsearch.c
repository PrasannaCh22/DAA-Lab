//linearsearch
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
    int key;
    printf("Enter the element to be searched:");
    scanf("%d",&key);
    int found = 0;
    for(int  i =0;i<n;i++){
        if(arr[i] == key){
            found  = 1;
            break;
        }
    }
    if(found == 1){
        printf("Element is found");
    }
    else{
        printf("Element is not found");
    }
    }