#include<stdio.h>
#include<stdlib.h>
struct node
{
    int Data;
    struct node *next;
};
struct node *front=0;
struct node *rear=0;
void Enqueue()
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    newnode->Data=num;
    newnode->next=0;
    if(front==0&&rear==0)
        front=rear=newnode;
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}
void Dequeue()
{
    struct node *t;
    t=front;
    if(front==0||rear==0)
        printf("Queue is empty.");
    else
    {
       printf("%d",front->Data);
       front=front->next;
       free(t);
    }
}
void Display()
{
    struct node *t;
    if(front==0&&rear==0)
        printf("Queue is empty.");
    else
    {
        t=front;
        while(t->next!=NULL)
        {
            printf("%d ",t->Data);
            t=t->next;
        }
        printf("%d ",t->Data);
    }
}
int main()
{
    int option;
    printf("1. Enqueue\t 2. Dequeue\t 3. Display\t 4.Exit\n");
    while(1)
    {
        printf("\nEnter your option:");
        scanf("%d",&option);
        switch(option)
        {
            case 1:Enqueue();
                    break;
            case 2:Dequeue();
                    break;
            case 3:Display();
                    break;
            case 4:exit(1);
                    break;
            default:printf("Choose valid option and try again.");
        }
    }
   
}
