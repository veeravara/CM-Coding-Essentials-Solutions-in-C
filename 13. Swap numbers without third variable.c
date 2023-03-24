#include<stdio.h>
int main(){
    int fn;
    int sn;
    printf("Enter Two Numbers:");
    scanf("%d %d",&fn,&sn);
    printf("Before Swap:%d and %d \n",fn,sn);
    fn=fn+sn;
    sn=fn-sn;
    fn=fn-sn;
    printf("After Swap: %d %d",fn,sn);

}
