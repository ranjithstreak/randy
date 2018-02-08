#include <stdio.h>
#include<conio.h>
void main()
{
    int a,b,i,d=0,c=0;
    clrscr();
    printf("Enter the number :\n");
    scanf("%d",&a);
    b=a;
    while(b!=0)
    {
        b/=10;
        ++c;
    }
    b=a;
    while(b!=0)
    {
        i=b%10;
        d+=pow(i,c);
        b/=10;
    }
    if(d==a)
    printf("It is a armstrong number");
    else
    printf("It is not a armstrong number");
    getch();
}
