// To perform the big number in a given 3 number 
#include<stdio.h>
void main ()
{
    int a,b,c;
    printf("Enter a,b,c values");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("a is big");
        }
        else
        {
            printf("c is big");
        }
    }
    else
    {
        if(b>c)
        {
            printf("b is big");
        }
        else
        {
            printf("c is big");
        }

    }
}