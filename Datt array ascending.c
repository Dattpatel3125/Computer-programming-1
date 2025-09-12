#include<stdio.h>
int main()
{
    int a[10],b,c,d;
    printf("Enter the array elements \n");
    for(b=0;b<10;b++)
    {
        scanf("%d",&a[b]);
    }
    for(b=0;b<10;b++)
    {
        printf("Element of array is %d \n",a[b]);
    }
    for(b=0;b<10;b++)
    {
        for(c=b+1;c<10;c++)
        {
            if(a[b]<a[c])
            {
                d=a[b];
                a[b]=a[c];
                a[c]=d;
                printf("the sorted array is %d \n",a[b]);
            }
        }
    }
}
