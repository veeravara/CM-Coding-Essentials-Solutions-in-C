/* WAP to print first N Fibonacci numbers.
a series of numbers in which each number( Fibonacci number )is the sum of the two preceding numbers.
The simplest is the series 1, 1, 2, 3, 5, 8, etc.
*/
#include<stdio.h>
int main(){
    long long n;
    printf("Enter n:");
    scanf("%lld",&n);
    int firstNumber=0;
    int secondNumber=1;
    int thirdNumber=firstNumber+secondNumber;
    printf("%d,%d,%d,",firstNumber,secondNumber,thirdNumber);
    for(int i=1;i<=n;i++){
    firstNumber=secondNumber;
    secondNumber=thirdNumber;
    thirdNumber=firstNumber+secondNumber;
    printf("%d,",thirdNumber);

    }

}
