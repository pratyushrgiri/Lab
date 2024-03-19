/* Difference of two given matrix */
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10][10],b[10][10],i,c;
    printf("Enter  first 2*2 matrix\n");
    for(i=0;i<2;i++)
    {
        for(c=0;c<2;c++)
        {
            printf("matrix [%d][%d]=\t",i,c);
            scanf("%d",&a[i][c]);
        }
    }
    printf("Enter second 2*2 matrix\n");
    for(i=0;i<2;i++)
    {
        for(c=0;c<2;c++)
        {
            printf("matrix [%d][%d]=\t",i,c);
            scanf("%d",&b[i][c]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(c=0;c<2;c++)
        {
           a[i][c]=b[i][c]+a[i][c];
        }
    }
    printf("sum of 2*2 matrix is\n");
    for(i=0;i<2;i++)
    {
        for(c=0;c<2;c++)
        {
            printf("%d\t",a[i][c]);
        }
        printf("\n");
    }

    return 0;
    getch();
}