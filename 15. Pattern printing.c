#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    int k=1;
    for(int rows=1;rows<=n;rows++){
        for(int columns=1;columns<=rows;columns++){
                printf("%d",k);
                k++;
        }
        printf("\n");
    }

}
