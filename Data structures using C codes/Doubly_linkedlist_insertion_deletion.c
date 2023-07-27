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
void Dlelete_at_start()
{
    struct node *temp;
    temp=head;
    if(head==NULL)
        printf("Linked list is empty");
    else
    {  
        head=temp->next;
        head->prev=NULL;
        printf("Deleting node Data : %d\n",temp->Data);
        free(temp);
    }
}


void Delete_at_middle()
{
    struct node *temp1,*temp;
    int pos,count=0;
    printf("\nEnter node position : ");
    scanf("%d",&pos);
    if(pos>0)
    {
        if(head==NULL)
            printf("Linked list is empty");
        else
        {  
            temp1=head;
            while(count<pos-2)
            {
            count++;
            temp1=temp1->next;
            }
            temp=temp1->next;
            temp1->next=temp->next;
            temp->next->prev=temp1;
            printf("Deleting node data : %d\n",temp->Data);
            free(temp);
        }
    }
    else
        printf("Enter valid position..");
}
void Delete_at_end()
{
    struct node *temp;
    temp=head;
    if(head==NULL)
        printf("Linked list is empty");
    else
    {
        if(head->next==NULL)                                    // if one node exists in linked lists.
        {  
            printf("Deleting node Data : %d\n",temp->Data);
            free(head);
            head=NULL;
            return;
        }
        while(temp->next->next!=NULL)
            temp=temp->next;
        printf("Deleting node Data : %d\n",temp->next->Data);
        free(temp->next);
        temp->next=NULL;
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
    printf("1. Insert at beginning\t 2. Insert at middle\t3. Insert at end 4. Delete at start\t5. Delete in middle\t6. Delete at end\t7. Display\t8. Exit");
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
            case 4:Dlelete_at_start();
                    Display();
                    break;
            case 5:Delete_at_middle();
                    Display();
                    break;
            case 6:Delete_at_end();
                    Display();
                    break;
            case 7:Display();
                    break;
            case 8:exit(1);
                    break;
            default:printf("Please choose valid option:");
        }
    }
}
