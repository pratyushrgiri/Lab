/*Smallest no*/
#include<stdio.h>
#include<conio.h>
int main()
{
   long i,a[10],c;
    
    printf("Enter 10 diferent no\n");
    for(i=0;i<10;i++)
    {
        scanf("%ld",&a[i]);
    }
    printf("Dispay numbers\n");
    c=a[0];
    for(i=0;i<10;i++)
    {
        
          if(c>a[i])
          {
            c=a[i];
          }
        
    }
    printf("%ld is the smallest no..",c);

    return 0;
    getch();
}