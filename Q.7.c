//7. Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include<stdio.h>
int main()
{
    char a[50];
    int A=0,D=0,S=0;
    printf("to count the total number of alphabets, digits and special characters in a string:-\n");
    printf("enter a string with digit & special characters:-");
    gets(a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>=65&&a[i]<=90||a[i]>=96&&a[i]<=122)
            A++;
            if(a[i]>=48&&a[i]<=57)
            D++;
           if(a[i]>=32&&a[i]<=47||a[i]>=58&&a[i]<=64)
              S++;

    }
    printf("alphabets is=%d \n digits is=%d\n special characters=%d",A,D,S);
    getch();
    return 0;
}

