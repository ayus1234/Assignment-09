//Program to print the first 10 even natural numbers in reverse order

#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1;
    while(i<=10)
    {
        printf("%d\n",2*(11-i));
        i++;
    }
    getch();
}