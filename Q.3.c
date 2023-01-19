//3. Write a program to count vowels in a given string
#include<stdio.h>
int main()
{
    char c[50];
    int count=0;
    printf("a program to count vowels in a given string :-\n");
    printf("enter a string:-");
    gets(c);
    for(int i=0;c[i]!='\0';i++)
    {
        if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u')
            count++;
    }
    printf(" %s string in the count vowels is=%d",c,count);
    getch();
    return 0;
}
