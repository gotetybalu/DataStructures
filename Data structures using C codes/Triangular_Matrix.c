#include<stdio.h>
int main()
{
    int a[50][50];
    int i,j,rows,columns;
    printf("Enter no.of rows:");
    scanf("%d",&rows);
        printf("Enter no.of columns:");
    scanf("%d",&columns);
    if(rows>0&&columns>0)
    {
         printf("\t\t\tEnter Matrix elements:\t\t\t\n");
        if(rows==columns)
        {
            for(i=1;i<=rows;i++)
                for(j=1;j<=columns;j++)
                    scanf("%d",&a[i][j]);
            for(i=1;i<=rows;i++)
            {
                for(j=1;j<=columns;j++)
                    printf("%d\t",a[i][j]);
                    printf("\n");
            }
            printf("Triangular matrix is:\n");
            for(i=1;i<=rows;i++)
            {
                for(j=1;j<=columns;j++)
                    if(i>=j)
                    printf("%d ",a[i][j]);
                printf("\n");
            }
        }
    }
        else
            printf("Give positive row or columns value"); 
}  
