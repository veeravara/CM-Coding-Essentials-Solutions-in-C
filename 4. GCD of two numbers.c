// Find the GCD of two numbers
#include <stdio.h>
int main()
{
    int num1,num2,smallNumber,largeNumber,gcd;
    printf("Enter Two Numbers:");
    scanf("%d %d",&num1,&num2);
    if(num1>num2){
        largeNumber=num1;
        smallNumber=num2;
    }
    else
    {
        largeNumber=num2;
        smallNumber=num1;
    }
    for(int i=1;i<=smallNumber;i++){
        if(smallNumber%i==0 && largeNumber%i==0){
                gcd=i;
        }
    }
    printf("GCD is %d",gcd);

   return 0;
}
