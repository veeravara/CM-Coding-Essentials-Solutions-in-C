//Take input N from the user, find the sum of numbers from 1 to N
#include <stdio.h>
int main()
{
    int number,sum=0;
    printf("Enter a Number:");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        sum=sum+i;
    }
    printf("The Sum of numbers is %d",sum);
   return 0;
}
