#include<stdio.h>

int main()
{
   int a,i,res=0;
    printf("ENTER THE NUMBER:");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
    if(i%2==1){
    res+=(i*i);
    }
    }
    printf("SUM OF SQUARE OF NUMBERS : %d",res);
    return 0;
}