// WAP to find sum of first N even Numbers, from 1 to N
#include <stdio.h>
int main()
{
    int number,sum=0;
    printf("Enter a Number:");
    scanf("%d",&number);
    for(int i=2;i<=number;i++){
            if(i%2==0){
                sum=sum+i;
            }

    }
    printf("Sum is %d",sum);

}
