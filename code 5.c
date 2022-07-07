//Program to print the first 10 even natural numbers in reverse order

#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    for(i=10;i>=1;i--)
        printf("%d\n",2*i);
    getch();
}