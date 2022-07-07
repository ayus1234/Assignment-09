//Program to print the first 10 odd natural numbers in reverse order

#include<stdio.h>
#include<conio.h>
int main()
{
    int i=9;
    do
    {
        printf("%d\n",2*i+1);
        i--;
    }while(i>=0);
    getch();
}