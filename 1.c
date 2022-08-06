#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j;
    printf("enter 9 element for matrices 1st=");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    printf("enter 9 element for matrices 2nd=");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\n",c[i][j]);
        }
    }

}
