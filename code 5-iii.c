//Program to print the first 10 even natural numbers in reverse order

#include<stdio.h>
#include<conio.h>
int main()
{
    int i=10;
    do
    {
        printf("%d\n",2*i);
        i--;
    }while(i>=1);
    getch();
}