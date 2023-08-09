#include<stdio.h>
int main()
{
int a,rem,res=0,sum=0;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&a);
    while(a>0){
    rem=a%10;
    sum+=rem;
    res=(res*10)+rem;
    a/=10;
    }
    printf("REVERSED NUMBER: %d\n",res);
    printf("SUM OF DIGITS: %d",sum);
    return 0;
}