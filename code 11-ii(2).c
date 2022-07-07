//Program to print the cubes of the first 10 natural numbers in reverse order

#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1;
    while(i<=10)
    {
        printf("%d\n",(11-i)*(11-i)*(11-i));
        i++;
    }
    getch();
}