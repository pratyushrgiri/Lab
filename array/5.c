/*matrix */
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[2][2],i,c;
    for(i=0;i<3;i++)
    {
        for(c=0;c<3;c++)
        {
            scanf("%d",&a[i][c]);
        }
    }
     for(i=0;i<3;i++)
    {
        for(c=0;c<3;c++)
        {if(i=1)
        {
            printf("%d\t",a[i][c]);
            
        }
        else if(i=2)
        {
            printf("%d\t",a[i][c]);
            
        }
        else if(i=3)
        {
           printf("%d\t",a[i][c]);
            
        }
        }
        printf("\n");
    }
    return 0;
    getch();
}