//to read and display an array
#include<stdio.h>
int main(){
int n;

printf("Enter no of elements in an array:");
scanf("%d",&n);
int arr[n];
printf("Enter the elements in the array:");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("Elements in the array are:");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}

}


