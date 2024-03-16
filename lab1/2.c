/*WAP to calculate the area of a equilateral triangle*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int length,area;
    printf("enter the length of side of equlateral triangle?\n");
    scanf("%d",&length);
    area=1.73*0.25*length*length;
    printf("%d unit square",area);
    return 0;
    getch();
}