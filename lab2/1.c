/*Write a program to find the greatest number by two inputs*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int first_input,second_input;
    printf("What is the first input no\n");
    scanf("%d",&first_input);
    printf("What is the second input no\n");
    scanf("%d",&second_input);
    if(first_input>second_input)
    {
        printf("%d the first input no is greater",first_input);
    }
    else if(second_input>first_input)
    {
        printf("%d the second input no is greater",second_input);
    }
    else{
        printf("you entered the same number two times!");
    }
    return 0;
    getch();
}