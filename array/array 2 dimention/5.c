/*Product of the given two matrix matrix*/
#include<stdio.h>
#include<conio.h>
int main()
{
   int  a[10][10],b[10][10],m[10][10],i,c,z;
   printf("Enter the first matrix (2*2)\n");
   for(i=0;i<2;i++)
{
    for(c=0;c<2;c++)
    {
        printf("[%d,%d]\t",i,c);
        scanf("%d",&a[i][c]);
    }
}
  printf("Enter the second matrix (2*2)\n");
   for(i=0;i<2;i++)
{
    for(c=0;c<2;c++)
    {
        printf("[%d,%d]\t",i,c);
        scanf("%d",&b[i][c]);
    }
}
     printf("Entered first 2*2 matrix is\n");
    for(i=0;i<2;i++)
    {
        for(c=0;c<2;c++)
        {
            printf("%d\t",a[i][c]);
        }
        printf("\n");
    }
    printf("Entered second 2*2 matrix is\n");
    for(i=0;i<2;i++)
    {
        for(c=0;c<2;c++)
        {
            printf("%d\t",b[i][c]);
        }
        printf("\n");
    }

 printf("The product of the given 2*2 matrix is\n");
   for(i=0;i<2;i++)
{
    for(c=0;c<2;c++)
    {
        m[i][c]=0;
       for(z=0;z<2;z++)
    {
        
        m[i][c]=m[i][c]+a[i][z]*b[z][c];
    } 
    }
} 
 for(i=0;i<2;i++)
    {
        for(c=0;c<2;c++)
        {
            printf("%d\t",m[i][c]);
        }
        printf("\n");
    }
    return 0;
    getch();
}