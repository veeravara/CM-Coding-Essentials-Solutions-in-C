/*  WAP to print the following pattern
     *
    ***
   *****
  *******
 *********
 */
#include<stdio.h>
int main(){
    int rows;
    printf("Enter Number of Rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int spaces=1;spaces<=rows-i;spaces++){
            printf(" ");
        }
        for(int stars=1;stars<=((2*i)-1);stars++){
            printf("*");
        }
        printf("\n");
    }


}
