// WAP to print the factorial of a number
#include<stdio.h>
int main(){
    int number,fact=1;
    printf("Enter a Number:");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        fact=fact*i;

    }
    printf("The factorial of the given number %d is:%d",number,fact);

}
