#include<stdio.h>
#include<stdlib.h>
int Queue[20], front=-1,rear=-1,size;
void Enqueue()
{
    int ele;
    if(rear==size-1)
        printf("Queue overflow\n");
    else if(front==-1&&rear==-1)
    {
        rear++;
        front++;
        printf("Enter element to insert:");
        scanf(" %d",&ele);
        Queue[rear]=ele;
    }
    else
    {
        printf("Enter element to insert:");
        scanf(" %d",&ele);
        rear++;
        Queue[rear]=ele;
    }
}
void Dequeue()
{
    if(front==-1)
        printf("Queue is empty");
    else
    {
        printf("%d ",Queue[front]);
        front++;
    }
}
void Display()
{
    int i;
    if(front==-1)
        printf("\nQueue underflow\n");
    else
    {
        for(i=front;i<=rear;i++)
        printf("%d ",Queue[i]);
    }
}
int main()
{
    int option;    
    printf("Enter queue size:");
    scanf("%d",&size);
    if(size<1)
            printf("Give positive size");
        else
        {
            printf("1. Enqueue  2. Dequeue  3. Display  4. Exit");
            while(1)
            {  
                printf("\nEnter your option : ");
                scanf("%d",&option);
                switch(option)
                {
                    case 1  :   Enqueue();
                                break;
                    case 2  :   Dequeue();
                                break;
                    case 3  :   Display();
                                break;
                    case 4  :   exit(1);
                    default :   printf("Enter valid option.");
                }
            }
        }
}
