//Program to print the first 10 even natural numbers

#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1;
    do
    {
        printf("%d\n",2*i);
        i++;
    }while(i<=10);
    getch();
}