//compare bubblesort,selectionsort,insertionsort
#include<stdio.h>
void bubbleSort(int a[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

            }
        }
    }
}
void selectionSort(int a[],int n){
    int  i,j,midIndex,temp;
    for(int i=0;i<n-1;i++){
        midIndex = i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[midIndex]){
                midIndex = j;
            }
        }
        temp = a[i];
        a[i] = a[midIndex];
        a[midIndex] = temp;
     }
}
void insertionSort(int a[],int n){
    int i,j,key;
    for(i = 1;i<n;i++){
        key = a[i];
        j = i-1;
        while(j>=0 && a[j]>key){
            a[j+1] = a[j];
            j--;

        }
        a[j+1] = key;
    }
}
void copyArray(int src[],int dest[],int n){
    int i;
    for(i = 0;i<n;i++){
        dest[i] = src[i];
    }
}
void printArray(int a[],int n){
    int i =0;
    for(i =0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int n;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    int arr[n],b[n],s[n],in[n];
    printf("Elements in the array:");
    for(int  i =0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    copyArray(arr,b,n);
    copyArray(arr,s,n);
    copyArray(arr,in,n);
    bubbleSort(b,n);
    selectionSort(s,n);
    insertionSort(in,n);
    printf("Bubble Sort:");
    printArray(b,n);
    printf("\nSelection Sort:");
    printArray(s,n);
    printf("\nInsertion Sort:");
    printArray(in,n);
    return 0;

}