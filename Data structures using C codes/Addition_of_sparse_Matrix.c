#include<stdio.h>
int main()
{
    int a[50][50],b[50][50],c[50][50];
    int i,j,rows,columns,sparsecount=0;
        printf("Enter no.of rows:");
        scanf("%d",&rows);
            printf("Enter no.of columns:");
        scanf("%d",&columns);
        if(rows>1&&columns>1)
        {
            printf("\t\t\tEnter 1st Matrix elements:\t\t\t\n");
            for(i=1;i<=rows;i++)
                for(j=1;j<=columns;j++)
                {
                scanf("%d",&a[i][j]);
                }
            printf("\t\t\tEnter 2nd matrix is:\t\t\t\n");
            for(i=1;i<=rows;i++)
                for(j=1;j<=columns;j++)
            {
                scanf("%d",&b[i][j]);
            }
            printf("\n");
                for(i=1;i<=rows;i++)
                {
                    for(j=1;j<=columns;j++)
                    {
                        c[i][j]=a[i][j]+b[i][j];
                        printf("%d\t",c[i][j]);
                    }
                    printf("\n");
                }
                printf("\033[1;32mAdditon of two sparse matrix is\n");
                printf("\033[1;31m______________________\n");
                printf("\033[1;31m|\033[1;35mrow-num\033[1;31m|\033[1;35mcol-num\033[1;31m|\033[1;35mvalue\033[1;31m|\n");
                printf("|_______|_______|_____|\n");
                for(i=1;i<=rows;i++)
                    for(j=1;j<=columns;j++)
                        if(c[i][j]!=0)
                    {
                        printf("|\033[1;34m%d\t\033[1;31m|\033[1;34m%d\t\033[1;31m|\033[1;34m%d    \033[1;31m|\n",i,j,c[i][j]);
                        printf("|_______|_______|_____|\n");
                    }            
        }
        else
            printf("Enter positive number.");          
}

