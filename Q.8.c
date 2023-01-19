//8. Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    int i;
    printf("a program in C to copy one string to another string:-\n");
    printf("enter a string:-");
    gets(a);
    for( i=0;a[i]!='\0';i++)
       {
          b[i]=a[i];
       }
       b[i]='\0';
       printf("store in the another array=%s",b);
    getch();
    return 0;
}
