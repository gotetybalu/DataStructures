#include<stdio.h>
void shell(int arr[],int n)
{
    for(int gap=n/2;gap>0;gap=gap/2)
    {
        for(int i=gap;i<n;i++)
            for(int j=i-gap;j>=0;j-gap)
            {
                if(arr[j+gap]>arr[j])
                {
                    break;
                }
                int temp=arr[j+gap];
                arr[j+gap]=arr[j];
                arr[j]=temp;
           }  
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
        shell(arr,n);
          for(i=0;i<n;i++)
            printf("%d\t",arr[i]);
        printf("\n");
    }
    else
        printf("Enter positive size only...");
}
