// WAP to print sum of digits of a number ( ex: number=6838; sum=25
#include<stdio.h>
int main(){
    int number;
    printf("Enter a Number:");
    scanf("%d",&number);
      int remainder;
      int sum=0;
    while(number!=0){
        remainder=number%10;
        sum=sum+remainder;
        number=number/10;

    }
    printf("The Sum is: %d",sum);

}
