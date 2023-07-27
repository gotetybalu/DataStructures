#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}
void selection(int arr[],int n)
{
    int i,j,min;
    for(i=0;i<n-1;i++)
    {
        min=i;                  //1st
        for(j=i+1;j<n;j++)     //2nd
            if(arr[min]>arr[j])
            {
                 min=j;              //min=2nd
            }
            swap(&arr[min],&arr[i]);//2nd,1st
    }
}
int main()
{
    int arr[100],i,n;
    printf("Enter Here How many elements do you want to sort:");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Enter elements:");
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        selection(arr,n);
        for(i=0;i<n;i++)
            printf("%d\t",arr[i]);
        printf("\n");
    }
    else
        printf("Enter positive size only...");  
}
