//Program to print the first 10 odd natural numbers in reverse order

#include<stdio.h>
#include<conio.h>
int main()
{
    int i=9;
    while(i>=0)
    {
        printf("%d\n",2*i+1);
        i--;
    }
    getch();
}