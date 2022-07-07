//Program to print the first 10 odd natural numbers in reverse order

#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    for(i=9;i>=0;i--)
        printf("%d\n",2*i+1);
    getch();
}