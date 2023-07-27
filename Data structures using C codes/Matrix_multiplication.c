#include<stdio.h>
int main()
{
    int a[50][50],b[50][50],c[50][50];
    int rows1,columns1,rows2,columns2;
    int i,j;

    printf("Give no. of rows for 1st matrix: ");
    scanf("%d",&rows1);
    printf("Give no. of columns for 1st matrix: ");
    scanf("%d",&columns1);
    printf("Give no. of rows for 2nd matrix: ");
    scanf("%d",&rows2);
    printf("Give no. of columns for 2nd matrix: ");
    scanf("%d",&columns2);
    if(rows1>0 && columns1>0 && rows2>0 && columns2>0)
    {
        if(rows1==columns2)
        {
            printf("\t\tEnter first Matrix elements:\t\t\n");
            for(i=0;i<rows1;i++)
                for(j=0;j<columns1;j++)
                    scanf("%d",&a[i][j]);

            printf("\t\tEnter second Matrix elements:\t\t\n");
            for(i=0;i<rows2;i++)
                for(j=0;j<columns2;j++)
                    scanf("%d",&b[i][j]);

            int sum,k;
            for(i=0;i<rows2;i++)
                for(j=0;j<columns2;j++)
                {
                    sum=0;
                    for(k=0;k<rows1;k++)
                        sum=sum+(a[i][k]*b[k][j]);
                    c[i][j]=sum;
                }

            printf("multiplication of 2 Matrices is:\n");
            for(i=0;i<rows1;i++)
            {
                for(j=0;j<columns1;j++)
                        printf("%d ",c[i][j]);
                    printf("\n");
               
            }
        }
        else
 printf("1st matrix columns and 2nd matrix rows are not equal so          multiplication doesn't happen");
     }
   
    else
        printf("Please enter positive no. of rows or columns");
}

