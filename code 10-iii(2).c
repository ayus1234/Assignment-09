//Program to print the squares of first 10 natural numbers in reverse order

#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1;
    do
    {
        printf("%d\n",(11-i)*(11-i));
        i++;
    }while(i<=10);
    getch();
}