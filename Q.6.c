//6. Write a program to reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    int p;
    printf("a program to reverse a string:-\n");
    printf("enter a string:-");
    gets(a);
    p=strlen(a)-1;
    printf("reverse string is:-");
    for(int i=p;i>=0;i-- )
        printf("%c",a[i]);
    getch();
    return 0;
}
