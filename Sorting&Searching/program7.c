//linear search in an array
#include<stdio.h>
int main(){
    int n;
    printf("No of Elements in an array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter the key elements:");
    scanf("%d",&key);
    int i ;
    int found = 0;
    for(int i =0;i<n;i++){
        if(key == arr[i]){
            found = 1;
    
    printf("The Key is found at %d postion",i+1);
    break;
}

}
if(found==0){
    printf("Key Not Found");
}
}