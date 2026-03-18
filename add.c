// To perform the addition of two matrix 
#include<stdio.h>
void main ()
{
    int a[5][5],b[5][5],c[5][5],i,j,m,n;
    printf("Enter the number of rows and colums");
    scanf("%d%d",&m,&n);
    printf("Enter the matrix of A ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the matrix of B ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Addition of two matrix\n");
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                printf("%d\t",c[i][j]);
            }
        }
    }
    printf("\n");
}