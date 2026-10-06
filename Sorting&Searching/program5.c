//Swap two numbers using temporary variable
#include<stdio.h>
int main(){
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    int b;
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Before Swapping a and b are %d %d:",a,b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After Swapping a and b are %d %d:",a,b);
}