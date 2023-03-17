// WAP to check a number is prime or not
#include<stdio.h>
int main(){

    int number,temp=0;
    printf("Enter a Number:");
    scanf("%d",&number);
    for(int i=2;i<number;i++){
            if(number%i==0){
                temp++;
            }
    }
    if(temp>0){
        printf("Number is Not a prime");
    }
    else
        printf("Number is a Prime");

    return 0;
}
