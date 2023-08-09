#include<stdio.h>

int main()
{
    int a;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&a);
    if(a%2==0){
    printf("%d IS EVEN NUMBER.",a);
    }
    else{
    printf("%d IS ODD",a);
    }
    return 0;
}