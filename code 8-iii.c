//Program to print the squares of first 10 natural numbers

#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1;
    do
    {
        printf("%d\n",i*i);
        i++;
    }while(i<=10);
    getch();
}