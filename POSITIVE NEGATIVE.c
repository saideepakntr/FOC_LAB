#include<stdio.h>

int main()
{
    int a;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&a);
    if(a>0 || a==0){
    printf("%d IS POSITIVE NUMBER.",a);
    }
    else{
    printf("%d IS NEGATIVE NUMBER",a);
    }
    return 0;
}