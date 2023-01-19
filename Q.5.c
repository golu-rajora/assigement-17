//5. Write a program to convert a given string into lowercase
#include<stdio.h>
int main()
{
    char a[50];
    printf(" a program to convert a given string into lowercase:-\n");
    printf("enter a string:-");
    gets(a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]<=97)
            a[i]=a[i]+32;
    }
     printf("lowercase string is= %s",a);
     getch();
     return 0;
}

