/*Search for the input no*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],b,i;
    
    for(i=0;i<10;i++)
    {
        printf("Enter the \"%d\"number\n",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the number you want to search=\t");
    scanf("%d",&b);
    for(i=0;i<10;i++)
    {
        if(b==a[i])
        {
            printf("Yes there is the number\n");
            printf("it was the %dth inputed number",i);
        } 
        else{
            printf("There is no such number entered!!!!\n");
        }  
    }
    return 0;
    getch();
}