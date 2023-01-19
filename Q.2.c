//2. Write a program to count the occurrence of a given character in a given string
#include<stdio.h>
int main()
{
    char c[50],s;
    int count=0;
    printf(" a program to count the occurrence of a given character in a given string:-\n");
    printf("enter a string:-");
    gets(c);
    printf("select a one character in the string:-");
    scanf("%c",&s);
    for(int i=0;c[i]!='\0';i++)
    {
        if(c[i]==s)
            count++;
    }
    printf(" %c appears %d times in the string ",s,count);
    getch();
    return 0;
}
