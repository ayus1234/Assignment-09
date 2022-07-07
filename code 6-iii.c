//Program to print the first 10 odd natural numbers

#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0;
    do
    {
        printf("%d\n",2*i+1);
        i++;
    }while(i<=9);
    getch();
}