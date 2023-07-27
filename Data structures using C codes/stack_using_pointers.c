#include<stdio.h>
#include<stdlib.h>
struct node
{
    int Data;
    struct node *next;
};
struct node *top=0;
struct node *createnode()
{
    struct node *new=(struct node*)malloc(sizeof(struct node));
    int Num;
    printf("Enter element:");
    scanf("%d",&Num);
    new->Data=Num;
    new->next=0;
}
void push()
{
    struct node *new=createnode();
    if(new==NULL)
        printf("Stack is full");
    else
    {
        new->next=top;
        top=new;
    }
}
void pop()
{
    struct node *t;
    if(top==NULL)
        printf("Stack is underflow.");
    else
    {
        t=top;
        printf("poped element is:%d",t->Data);
        t=t->next;
        free(t);
    }
}
void Display()
{
    struct node *t;
    if(top==NULL)
        printf("Stack is Underflow...");
    else
    {
        while(t!=NULL)
        {
            printf("%d->",t->Data);
            t=t->next;
        }
    }
}
int main()
{
    int option;
    printf("1.Push\t 2.Pop\t3.Display\t4.Exit\n");
    while(1)
    {
        printf("\nEnter your option:");
        scanf("%d",&option);
        switch(option)
        {
            case 1:push();
                   break;
            case 2:pop();
                   break;
            case 3:Display();
                   break;
            case 4:exit(1);
                   break;
            default:printf("Please choose valid option..");
        }
    }
}
