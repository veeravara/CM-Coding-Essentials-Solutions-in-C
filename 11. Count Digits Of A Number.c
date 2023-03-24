/* WAP to count digits of a number
input: 6789
Output: 4
*/
#include<stdio.h>
int main(){
    long long number;
    int count=0;
    printf("Enter the Number:");
    scanf("%lld",&number);
    while(number!=0){
        number=number/10;
        count++;
    }
    printf("%d",count);

}
