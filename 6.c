#include<stdio.h>
void main()
{
    int a[10][10];
    int i,j,r,sum,sum1,c;
    printf("enter size of rows and column of matrices=");
    scanf("%d%d",&r,&c);
    printf("please enter %d values for matrices.",r*c);
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

    for(i=0;i<r;i++)
    {
        sum=sum1=0;

        for(j=0;j<c;j++)
        {
           sum=sum+a[i][j];
           sum1=sum1+a[j][i];
        }
        if(i==0)
        {
            printf("sum of 1st rows=%d\n",sum);
            printf("sum of 1st column=%d\n",sum1);


        }
        printf("\n");
        if(i==1){
            printf("sum of 2nd rows=%d\n",sum);
            printf("sum of 2nd column=%d\n",sum1);
        }
        printf("\n");
        if(i==2){
            printf("sum of 3rd rows=%d\n",sum);
            printf("sum of 3rd column=%d\n",sum1);
        }

    }

}
