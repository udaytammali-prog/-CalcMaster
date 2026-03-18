// To perform the multiplication of two matrix
#include<stdio.h>
void main ()
{
    int a[5][5],b[5][5],c[5][5],i,j,m,n,k;
    printf("Enter the number of rows and colums");
    scanf("%d%d",&m,&n);
    printf("Enter the matrix A element");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    printf("Enter the matrix A element");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);

        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            c[i][j]=0;
            for(k=0;k<m;k++)
        
         {
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
         }
        }
    }
    printf("Multiplication of two matrix \n");
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