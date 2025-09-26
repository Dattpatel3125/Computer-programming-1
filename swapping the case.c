#include<stdio.h>
void main()
{
    char x[50];
    int i=0;
    printf("Enter name \n");
    gets(x);
    printf("Name is %s\n",x);
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]>='a'&&x[i]<='z')
        {
            x[i]=x[i]-32;
        }
        else if(x[i]>='A'&&x[i]<='Z')
        {
            x[i]=x[i]+32;
        }
    }
    printf("the string changed is %s",x);
}
