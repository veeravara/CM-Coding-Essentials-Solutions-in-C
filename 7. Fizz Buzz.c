// WAP that prints numbers from 1-100, for multiples of 3 print fizz, for multiples of 5 print buzz
#include<stdio.h>
int main(){
    for(int i=1;i<=100;i++){
        if(i%3==0){
            printf("Fizz\n");
        }
        else if(i%5==0){
            printf("Buzz\n");
        }
        else
            printf("%d \n",i);
    }


}
