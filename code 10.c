//Program to print the squares of first 10 natural numbers in reverse order

#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    for(i=10;i>=1;i--)
        printf("%d\n",i*i);
    getch();
}