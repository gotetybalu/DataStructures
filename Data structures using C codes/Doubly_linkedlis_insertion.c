#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int Data;
    struct node *next;
};
struct node *head=NULL;
struct node* Create()
{
    int Number;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter number:");
        scanf("%d",&Number);
        newnode->prev=NULL;
        newnode->Data=Number;
        newnode->next=NULL; 
}
void insert_at_begining()
{
    struct node *new=Create();
    if(head==NULL)
        head=new;
    else
    {
        new->next=head;
        head->prev=new;
        head=new;
    }
}
void insert_in_middle()
{
    struct node *newnode=Create();
    struct node *t=head; //for traverse
    int position,count=0;
    printf("Enter here where do you want to insert:");
    scanf("%d",&position);
    if(position>0)
    {
        if(head==NULL)
            head=newnode;
        else
        {
            while(position<count)
            {
                t->next=t;
                count++;
            }
            newnode->next=t->next;
            newnode->next->prev=t;
            t->next=newnode;
        }
    }
    else
        printf("Please choose valid position.");;
}
void insert_at_end()
{
    struct node *newnode=Create();
    struct node *t=head;
    if(head==NULL)
            head=newnode;
    else
    {
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=newnode;
        newnode->prev=t;
    }
    
}
void Display()
{
    struct node *t=head;
    if(head==NULL)
        printf("List is empty.");
    else
    {
        while(t->next!=NULL)
        {
            printf("%d<->",t->Data);
            t=t->next;
        }
    }
    printf("%d<->",t->Data);
}
int main()
{
    int option;
    printf("1. Insert at begining\t 2. Insert at middle\t3. Insert at end\t4. Display\t5. Exit");
    while(1)
    {
         printf("\nChoose your option:");
        scanf("%d",&option);
        switch(option)
        {
            case 1:insert_at_begining();
                    printf("Now list is:");
                    Display();
                    break;
            case 2:insert_in_middle();
                    Display();
                    break;
            case 3:insert_at_end();
                    Display();
                    break;
            case 4:Display();
                    break;
            case 5:exit(1);
                    break;
            default:printf("Please choose valid option:");
        }
    }
}
