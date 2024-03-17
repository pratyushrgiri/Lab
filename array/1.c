/*to find the greatest no in input no by aray*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int input_no[10],i,checking_value,a;
    for(i=0;i<10;i++)
    {
        printf("Input \"%dth\" number\n",i);
        scanf("%d",&input_no[i]);
    }
    checking_value=input_no[0];
    for(i=0;i<10;i++)
    {
        if(checking_value<input_no[i])
        {
            checking_value=input_no[i];
            a=i;
        }
    }
    printf("The greatest no is %dth inputed no which is \"%d\". ",a,checking_value );
    return 0;
    getch();
}