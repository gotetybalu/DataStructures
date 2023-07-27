#include<stdio.h>
int main()
{
    int a[50][50];
    int i,j,rows,columns,sparsecount=0;
    printf("Enter no.of rows:");
    scanf("%d",&rows);
    printf("Enter no.of columns:");
    scanf("%d",&columns);
    if(rows>0&&columns>0)
     {
         printf("\t\t\tEnter Matrix elements:\t\t\t\n");
            //reading
            for(i=1;i<=rows;i++)
                for(j=1;j<=columns;j++)
                {
                    scanf("%d",&a[i][j]);
                }
                //printing matrix
                printf("The given matrix is:\n");
                for(i=1;i<=rows;i++){
                for(j=1;j<=columns;j++)
                {
                    printf("%d ",a[i][j]);
                }
                printf("\n");
                }
                printf("\033[1;31m______________________\n");
                printf("\033[1;31m|\033[1;35mrow-num\033[1;31m|\033[1;35mcol-num\033[1;31m|\033[1;35mvalue\033[1;31m|\n");
                printf("|_______|_______|_____|\n");
                for(i=1;i<=rows;i++)
                    for(j=1;j<=columns;j++)
                        if(a[i][j]!=0)
                        {
printf("|\033[1;34m%d\t\033[1;31m|\033[1;34m%d\t\033[1;31m|\033[1;34m%d    \033[1;31m|\n",i,j,a[i][j]);
                        printf("|_______|_______|_____|\n");
                        }        
        }
        else
            printf("Please give positive size only");
}
