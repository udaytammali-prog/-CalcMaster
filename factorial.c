// To see given number factorial 
#include<stdio.h>
void main ()
{
    int n ,f=1;
    printf("Enter the number :");
    scanf("%d",&n);
    while(n>0)
    {
        f=f*n;
        --n;
    }
    printf("The factorial of given number %d",f);

}