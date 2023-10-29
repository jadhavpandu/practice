#include <stdio.h>

int main()
{
 int n,digit,sum=0,product=1;
 printf("enter a value of n");
 scanf("%d",&n);
 while(n!=0){
     digit=n%10;
     sum=sum+digit;
     product=product*digit;
     n=n/10;
 }
 printf("sum is : %d",sum);
 printf("\nproduct is : %d",product);
}
