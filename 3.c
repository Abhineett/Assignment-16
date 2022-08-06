#include<stdio.h>
void main()
{
    int a[10][10];
    int i,j,r,c;
    printf("enter row and column size for matrices=");
    scanf("%d%d",&r,&c);
    printf("enter %d element for matrices:",r*c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrices is:\n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
printf("after transpose.\n");
   for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }




}
