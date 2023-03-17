// Take 3 Numbers from the user, WAP to print the largest number
#include<stdio.h>
int main(){
    int fn,sn,tn;
    printf("Enter Three Numbers:");
    scanf("%d %d %d",&fn,&sn,&tn);

    if(fn>=sn &&fn>=tn){
        printf("%d is Larger Number",fn);
    }
    else if(sn>=fn && sn>=tn){
        printf("%d is larger number",sn);
    }
    else
        printf("%d is the larger number",tn);

    return 0;
}
