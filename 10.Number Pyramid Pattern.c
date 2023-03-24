//WRP to Print the Following Pattern
/*
    1
   232
  34543
 4567654
567898765
*/
#include<stdio.h>
int main(){
    int rows;
    printf("Enter Number Of Rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        int j=i;
        for(int spaces=1;spaces<=(rows-i);spaces++){
            printf(" ");
        }
        for(int increasingValues=1;increasingValues<=i;increasingValues++){
            printf("%d",j);
            j++;
        }
        for(int decreasingValues=1;decreasingValues<=(i-1);decreasingValues++){
                printf("%d",(j-2));
                j--;
        }
        printf("\n");
    }

}


