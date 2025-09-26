#include<stdio.h>
#include<string.h>
void main()
{
    char x[50];
    int i=0;
    printf("Enter name \n");
    gets(x);
    printf("Name is %s\n",x);
    while(x[i]!='\0')
    {
        i++;
        }
    printf("the length is %d \n",i);
    printf("the length is %d",strlen(x));

}
