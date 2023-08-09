#include<stdio.h>

int main()
{
    int a,b;
    printf("ENTER THE FIRST NUMBER: ");
    scanf("%d",&a);
    printf("ENTER THE SECOND NUNBER: \n");
    scanf("%d",&b);
    if(b>a){
    printf("%d IS GREATER THAN %d.",b,a);
    }
    else{
    if(a>b){
    printf("%d IS GREATER THAN %d.",a,b);
    }
    else{
    printf("ENTER THE CORRECT VALIES.");
    }
    }
    return 0;
}