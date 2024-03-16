/*WAP To converte fahrenhite scale to kelvin*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float f,k;
    printf("enter the temperature in fahrenhete scale?\n");
    scanf("%f",&f);
    k=((f-32)/9)+273;
    printf("%f degree Kelvin",k);
    return 0;
    getch();
}