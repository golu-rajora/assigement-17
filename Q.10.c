//10. Write a program in C to Find the Frequency of Characters
#include<stdio.h>
int main()
{
    char c[20];
    char h[200]={0};
    printf("a program in C to Find the Frequency of Characters:-\n");
    printf("enter a name:-");
    gets(c);
    for(int i=0;c[i]!='\0';i++)
    {
        h[c[i]]++;
    }
     for(int i=0;i<122;i++)
     {
         if(h[i]>0)
            printf("%c-%d\n",i,h[i]);
     }
     getch();
     return 0;
}
