#include<stdio.h>

int main()
{
int a,sum=0,i;
    printf("ENTER THE NUNBER :");
    scanf("%d",&a);
    for(i=0;i<=a;i++){
    sum+=i;
    }
    printf("SUM: %d",sum);
    return 0;
}