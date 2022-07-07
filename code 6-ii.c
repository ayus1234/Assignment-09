//Program to print the first 10 odd natural numbers

#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0;
    while(i<=9)
    {
        printf("%d\n",2*i+1);
        i++;
    }
    getch();
}