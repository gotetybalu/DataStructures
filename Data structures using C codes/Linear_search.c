#include <stdio.h>
int linearsearch(int arr[],int n,int key)
{
    for(int i=1;i<=n;i++)
        if(arr[i]==key)
            return i;
        return-1;
}
int main()
{
    int arr[25],i,n,key;
    printf("Enter array elements size:");
    scanf("%d",&n);
    if(n>1)
    {
        printf("Enter elements...");
        for(i=1;i<=n;i++)
        scanf("%d",&arr[i]);
        printf("Enter key value:");
        scanf("%d",&key);
        int result=linearsearch(arr,n,key);
        (result==-1)?printf("key is not found"):
        printf("key is found at index%d",result);
    }
    else
        printf("Enter positive size only...");
}
