//Program to print the cubes of the first 10 natural numbers in reverse order

#include<stdio.h>
#include<conio.h>
int main()
{
    int i=10;
    do
    {
        printf("%d\n",i*i*i);
        i--;
    }while(i>=1);
    getch();
}