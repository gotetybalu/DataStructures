#include<stdio.h>
int Bubble(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
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
        Bubble(arr,n);
        for(i=0;i<n;i++)
            printf("%d\t",arr[i]);
        printf("\n");
    }
    else
        printf("Enter positive size only...");
}
