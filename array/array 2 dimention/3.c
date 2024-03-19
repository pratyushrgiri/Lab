/*For displaying digonal of matrix */
#include<stdio.h>
#include<conio.h>
int main()
{
   int  a[10][10],i,c;
   printf("Enter the matrix (3*3)\n");
   for(i=0;i<3;i++)
{
    for(c=0;c<3;c++)
    {
        printf("[%d,%d]\t",i,c);
        scanf("%d",&a[i][c]);
    }
}
     printf("Entered 3*3 matrix is\n");
    for(i=0;i<3;i++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d\t",a[i][c]);
        }
        printf("\n");
    }

 printf("the digonal of matrix (3*3) is\n");
   for(i=0;i<3;i++)
{
    for(c=0;c<3;c++)
    {
        if(i==c)
        {
            printf("%d",a[i][c]);
        }
        
    }
    printf("\n");
}
    return 0;
    getch();
}