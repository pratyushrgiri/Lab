/*Swich case program*/
#include<stdio.h>
#include<conio.h>
int main()
{int a;
printf("enter the number of month you want to know\n");
scanf("%d",&a);
switch (a)
{
case 1:
    printf("the month is \"jan\"");
    break;
case 2:
    printf("the month is \"feb\"");
    break;
case 3:
    printf("The month is \"march\"");
    break;
case 4:
    printf("The month is \"april\"");
    break;
case 5:
    printf("The month is \"may\"");
    break;
case 6:
    printf("The month is \"june\"");
    break;
case 7:
    printf("The month is \"july\"");
    break;
case 8:
    printf("The month is \"aug\"");
    break;
case 9:
    printf("The month is \"sep\"");
    break;
case 10:
    printf("The month is \"oct\"");
    break;
case 11:
    printf("The month is \"nov\"");
    break;
case 12:
    printf("The month is \"dec\"");
    break;     
default:printf("There are only 12 months!!!!!");
    break;
}
    return 0;
    getch();
}