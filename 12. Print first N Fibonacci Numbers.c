/* WAP to print first N Fibonacci numbers.
the Fibonacci sequence is a sequence in which each number is the sum of the two preceding ones
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
    for(int i=1;i<=(n-3);i++){
    firstNumber=secondNumber;
    secondNumber=thirdNumber;
    thirdNumber=firstNumber+secondNumber;
    printf("%d,",thirdNumber);

    }

}
