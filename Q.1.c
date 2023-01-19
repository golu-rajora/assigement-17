//1. Write a program to calculate the length of the string. (without using builtin method)
#include<stdio.h>

int main()
{
    char c[50];
    int length=0;
    printf("a program to calculate the length of the string:-\n");
    printf("enter the string:-");
    gets(c);
    for( int i=0;c[i]!='\0';i++)
        length++;
    printf(" %s sting length is=%d",c,length);
    getch();
    return 0;

}
