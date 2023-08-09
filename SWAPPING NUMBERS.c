#include<stdio.h>

int main()
{
int a,b,temp;
    printf("ENTER THE FIRST NUNBER: \n");
    scanf("%d",&a);
    printf("ENTER THE SECOND NUNBER: \n");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("AFTER SWAPPING -> \n");
    printf("FIRST NUNBER: %d\n",a);
   printf("SECOND NUNBER: %d\n",b);
    return 0;
}