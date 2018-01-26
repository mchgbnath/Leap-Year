#include<stdio.h>
#include<conio.h>
void main()
{
    int z;
    clrscr();
    printf("Enter the year\n");
    scanf("%d",&z);
    if(z%4==0)
    printf("It is a leap year");
    else
    printf("It is not a leap year");
    getch();
}



