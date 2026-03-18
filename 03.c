#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter 3 numbers:");
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
