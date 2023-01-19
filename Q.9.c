//9. Write a C program to sort a string array in ascending order.
#include<stdio.h>
#include<string.h>
int main()
{
    char c[20],t;
    printf("a C program to sort a string array in ascending order.:-\n");
    printf("enter a name:-");
    gets(c);
    for(int i=0;i<strlen(c)-1;i++)
    {
        for(int j=i+1;j<=strlen(c)-1;j++)
        {
            if(c[i]>c[j])
            {
               t=c[i];
               c[i]=c[j];
               c[j]=t;
            }

        }
    }
    printf("sort in ascending order:-");
    printf("%s",c);
    getch();
    return 0;
}
