#include<stdio.h>
#include<stdlib.h>
int rear=-1,front=-1,Queue[20],size;
void Cenqueue()
{
    int ele;
    if((rear+1)%size==front)
        printf("Circular Queue is full");
    else if(rear==-1&&front==-1)
    {
        front++;
        rear++;
        printf("Enter elment for inserting");
        scanf("%d",&ele);
        Queue[rear]=ele;
    }
    else
    {
        printf("Enter elment for inserting");
        scanf("%d",&ele);
        rear=(rear+1)%size;
        Queue[rear]=ele;
       
    }
}
void Cdequeue()
{
    if(front==-1)
        printf("Circular Queue is underflow");
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        printf("%d ",Queue[front]);
        front=(front+1)%size;
    }
}
void Display()
{
    if(front==-1)
        printf("Queue is underflow");
    else
    {
        for(int i=front;i!=rear;i=(i+1)%size)
        printf("%d ",Queue[i]);
    printf("%d ",Queue[rear]);
    }
}
int main()
{
    int option;    
    printf("Enter queue size : ");
    scanf("%d",&size);
    if(size<1)
            printf("Give positive size: ");
        else
        {
            printf("1. Enqueue  2. Dequeue  3. Display  4. Exit");
            while(option!=5)
            {  
                printf("\nEnter your option : ");
                scanf("%d",&option);
                switch(option)
                {
                    case 1  :   Cenqueue();
                                break;
                    case 2  :   Cdequeue();
                                break;
                    case 3  :   Display();
                                break;
                    case 4  :   exit(1);
                    default :   printf("Enter valid option.");
                }
            }
        }
}
