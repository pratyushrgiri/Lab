/*Enter any number and then find their sum*/
#include<stdio.h>
#include<conio.h>

int main()
{
    long x=0;
    long a[x],i,y=0;
    printf("What is the number of data you want to sum\n");
    scanf("%ld",&x);
    printf("now start entering the values\n");
    for(i=0;i<x;i++)
    {
        scanf("%ld",&a[x]);
    }
    for(i=0;i<x;i++)
    {
        y=y+a[x];
    }
    printf("The total sum is %ld",y);
    return 0;
    getch();
}