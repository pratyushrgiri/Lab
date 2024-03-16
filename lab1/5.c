/*WAP to get a three digit no and then calculate the sum of individual
digit*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a,b,c,e;
    printf("input a three digit no?\n");
    scanf("%d",&n);
    a=n%10;
    b=n/10;
    c=b%10;
    e=b/10;
    n=e+c+a;
    printf("%d+%d+%d=%d",e,c,a,n);
    return 0;
    getch();
}