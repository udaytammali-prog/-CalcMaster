// To perform the given number is a palidrome or not 
#include<stdio.h>
void main()
{
    int n, r,s=0,t;
    printf("Enter the number ");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if (t==s)
    {
        printf("The number is palidrome");
    }
    else
    {
        printf("The number is not palidrome");
    }
}