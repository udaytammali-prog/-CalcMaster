// To use the switch 
#include<stdio.h>
void main()
{
    int a=10,b=20,c=15;
    if(a>b&&a>c)
    {
        printf("A is big");
    }
    else
    {
        printf("logical and condition is false\n");
    }
    if(a>b||a>c)
    {
        printf("logical or condition is ture \n");
    }
    if(!(a>b))
    {
        printf("Logical not condtion is true \n");
    }
}