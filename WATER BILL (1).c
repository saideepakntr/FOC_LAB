#include<stdio.h>

int main()
{
    float a,b,tot;
    printf("ENTER THE WATER USAGE(in cubic feet): ");
    scanf("%f",&a);
    if(a<=1000){
    printf("WATER CHARGES: $15.00");
    }
    else{
    if(a>1000 && a<=2000){
    b=a-1000;
    tot=(15+(b*0.0175));
    printf("WATER CHARGES: $%f",tot);
    }
    else{
    if(a>2000 && a<=3000){
    b=a-1000;
    tot=(15+(b*0.02));
    printf("WATER CHARGES: $%f",tot);
    }
    else{
    if(a<3000){
    printf("WATER CHARGES: $70.00");
    }
    else{
    printf("ENTER THE VALID INPUT.");
    }
    }
    }
    }
    return 0;
}