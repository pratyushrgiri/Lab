/*WAP to calculate the perimeter of rectangular surface*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float length,breadth,perimeter;
    printf("enter the length of the rectangle\n");
    scanf("%f",&length);
    printf("enter the breadth of the rectangle");
    scanf("%f",&breadth);
    perimeter=2*(length+breadth);
    printf("the perimeter of the rectangle is %f sq units",perimeter);
    return 0;
    getch();

}