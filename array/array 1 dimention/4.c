/*Total sum of 10 input no*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,y=0;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        y=y+a[i];
    }
    printf("The sum of the given 10 number is \"%d\"",y);
    return 0;
    getch();
}