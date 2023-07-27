#include <stdio.h>
int binarysearch(int arr[],int key,int low,int high)
{
    while(low<high)
    {
        int mid=(high+low)/2;
        printf("%d\t%d\t%d\n",low,mid,high);
        if(arr[mid]==key)      // If found at mid, then return it
            return mid;
        if(arr[mid]<key)    // Search the right half
            low=mid+1;
        else               // Search the left half
            high=mid;     // printf("%d\t%d\t%d\n",low,mid,high);
    }
    return -1;
}
int main()
{
    int arr[25],i,n,key;
    printf("Enter array size:");
    scanf("%d",&n);
    if(n>0)
    {
        for(i=1;i<=n;i++)
            scanf("%d",&arr[i]);
        printf("Enter key value:");
        scanf("%d",&key);
        int result=binarysearch(arr,key,1,n-1);
        if(result==-1)
            printf("key is not found");
        else
             printf("key is found at %d",result);
    }
    else
        printf("Enter positive size only...");
}
