//count even and odd in an array
#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of elements in the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Elements in the array are:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int even =0;
    int odd = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;}
        else{
            odd++;
    }}
    printf("The count of even is %d and odd is %d",even,odd);
}