// WAP to find the LCM of two numbers
#include<stdio.h>
//Solution-1 : Formula Based Approach
int main(){
    int num1,num2,smallNumber,largeNumber,gcd,lcm;
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
    printf("GCD is %d \n",gcd);
    lcm=num1*num2/gcd;
    printf("LCM is %d",lcm);
}
