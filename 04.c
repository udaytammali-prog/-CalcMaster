// To see the given string is a palindrome or not
#include<stdio.h>
void main()
{
   int n,r,s=0,t;
   printf("Enter the number");
   scanf("%d",&n);
   n=t;
   while(n>0)
   {
    n=n%10;
    s=s*10+r;
    n=n/10;
   }
   if(t==s)
   {
    printf("palidrome");
   }
   else
   {
    printf("not palindrome");
   }
}

