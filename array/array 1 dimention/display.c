/*Dispaly the given no in array*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a[10];
    
    printf("Enter 10 diferent no\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Dispay numbers\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
    getch();
}