//Program to print the first 10 odd natural numbers in reverse order

#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
        printf("%d\n",(2*(11-i))-1);
    getch();
}