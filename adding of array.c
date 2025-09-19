#include <stdio.h>
int  main()
{
    int a[2][3],b[2][3],c[2][3],i,j;
    printf("Enter the number of Matrix A \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    printf("the values of A is \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("the elements of A [%d,%d] is %d\n",i,j,a[i][j]);
        }
    }
    printf("Enter the number of Matrix B \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }

    }
    printf("the values of B is \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("the elements of B [%d,%d] is %d\n",i,j,b[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("the added matrix is [%d,%d] is %d \n",i,j,c[i][j]);
        }
    }
}
