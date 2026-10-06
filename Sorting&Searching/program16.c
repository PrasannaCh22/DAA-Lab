//Insert One Element into the Sorted Left Part(Single Pass of Insertion Sort)
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
    int key = arr[1];
    int j = 0;
    while(j>=0 && arr[j]>key){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = key;
    printf("Elements after selection sort ,single pass:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}