#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the number: \n ");
    scanf("%d",&a);
    d=a;
    while (a!=0)
    {
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    if (d==c)
    {
        printf("the number is palindrome ");
        printf("the reverse number is %d",c);
    }
    else
    {
        printf("not palindrome");
        printf("reverse number is %d",c);
    }
}
