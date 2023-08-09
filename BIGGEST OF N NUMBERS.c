#include<stdio.h>

int main()
{
    int a[10],i,n;
    printf("ENTER THE VALUE OF N: \n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("ENTER VALUE:%d\n",i+1);
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
    if(a[0]<a[i]){
    a[0]=a[i];
    }
    }
    printf("\nTHE BIGGEST NUMBER: %d",a[0]);
    return 0;
}