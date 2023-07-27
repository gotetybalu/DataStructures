#include<stdio.h>
int main()
{
    int a[50][50],b[50][50],c[50][50];
    int i,j,rows,columns;
    printf("Enter no.of rows:");
    scanf("%d",&rows);
        printf("Enter no.of columns:");
    scanf("%d",&columns);
    if(columns>0&&rows>0)
    {
    printf(\tEnter first Matrix elements:\t\n");
    for(i=0;i<rows;i++)
        for(j=0;j<columns;j++)
        scanf("%d",&a[i][j]);
printf("\tEnter second Matrix elements:\n");
    for(i=0;i<rows;i++)
        for(j=0;j<columns;j++)
            scanf("%d",&b[i][j]);
printf("addition of two matrices is:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
      {
        c[i][j]=a[i][j]+b[i][j];
        printf("%d  ",c[i][j]);
      }
      printf("\n");
    }    
}
else
   printf("you entered %d rows and %d colums doesn't exist minum 1 row and 1 column              required Try again:",rows,columns);
}
