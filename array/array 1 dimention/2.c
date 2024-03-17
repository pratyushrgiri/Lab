/*Array of bubble shorting with of 10 no in assending order..*/
#include <stdio.h>
#include <conio.h>
 int main()
{
    printf("Enter 10 different no\n");
    int a[10],i,x,y;
    for(x=0;x<10;x++)
    {
        scanf("%d",&a[x]);
    }
    printf("Assending order\n");
    for(x=0;x<10;x++)
    {
        for(i=0;i<10;i++)
        {
            if(a[x]<a[i])
            {
                y=a[x];
                a[x]=a[i];
                a[i]=y;
            }
        }
        
    }
    for(x=0;x<10;x++)
    {
        printf("%d\t",a[x]);
    }
    return 0;
    getch();
}