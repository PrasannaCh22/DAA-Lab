//Select the Smallest Element and Place it First
//(Single Pass of Selection Sort)
#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of elements in the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Elements in the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    for(int i = 1;i<n;i++){
        key = 0;
        if(arr[i]<arr[key]){
            key = i;
        }
    }
    int temp = arr[0];
    arr[0] = arr[key];
    arr[key] = temp;
    printf("Elements after selection sort:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}