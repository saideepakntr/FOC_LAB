#include<stdio.h>

int main()
{
   int a,mul=1,i;
    printf("ENTER THE NUMBER:");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
    mul*=i;
    }
    printf("FACTORIAL : %d",mul);
    return 0;
}