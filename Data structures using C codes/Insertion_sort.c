#include<stdio.h>
int insertion(int arr[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        j=i-1;//0 1st        5,-2,45,21,10
        key=arr[i];//2nd
        while(j>-1&&arr[j]>key)//0>-1&&arr[5]>0
        {
            arr[j+1]=arr[j];//0+1=1 =arr[j]
            j--;
        }
        arr[j+1]=key;
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
        insertion(arr,n);
          for(i=0;i<n;i++)
            printf("%d\t",arr[i]);
        printf("\n");
    }
    else
        printf("Enter positive size only...");  
}
