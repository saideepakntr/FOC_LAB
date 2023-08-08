#include<stdio.h> 
int main()
{
int even=0,a,odd=0,i,res;
 printf("ENTER THE NUMBER:");
 scanf("%d", &a); 
  for(i=0;i<=a;i++){ 
  if(i%2==0){
  even-=i;
  }
  if(i%2==1){
 odd+=i;
 } 
 }
printf("%d", (even+odd));

return 0;
}