#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node* head=NULL;
struct node* createNode()
{
    int num;
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
        printf("\nMemory not allocated.");
    else
    {
        printf("Enter number:");
        scanf("%d",&num);
        temp->data=num;
        temp->link=NULL;
    }
    return temp;
}
void insertion_atBegining()
{
    struct node *new=createNode();
    if(head==NULL)
        head=new;
    else
    {
        new->link=head;
        head=new;
    }
}
void insertion_atmiddle()
{
    struct node *new=createNode();
    struct node *temp=head;
    int pos,count=1;
    printf("At which position do you want to insert? : ");
    scanf("%d",&pos);
    if(pos>0)
    {
        if(head==NULL)
            head=new;
        else
        {
            while(count<pos)
            {
                count++;
                temp=temp->link;
            }
            new->link=temp->link;
            temp->link=new;
        }
    }
    else
        printf("You entered invalid position. Please give a proper value.");
}
void insertion_atending()
{
    struct node *new=createNode();
    struct node *temp=head;
    if(head==NULL)
        head=new;
    else
    {
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=new;
    }
}
void Delete_Atstart()
{
    struct node *temp;
    temp=head;
    head=temp->link;
    free(temp);
}
void Delete_middle()
{
    int position,count=1;
    struct node *p=head;
    struct node *temp;
    printf("Enter position where do you want to delete?");
    scanf("%d",&position);
    while(count<position)
    {
        p=p->link;
        count++;
    }
    temp=p->link;
    p->link=temp->link;
    free(temp);
}
void Delete_atend()
{
    struct node *prev=head,*temp;
    while(prev->link->link!=NULL)
    {
        prev=prev->link;
    }
    temp=prev->link;
    prev->link=NULL;
    free(temp);
}
void Display()
{
    struct node *temp=head;
    if(temp==NULL)
        printf("Linked list is empty.");
    while(temp!=NULL)
    {
        printf(" %d-> ",temp->data);
        temp=temp->link;
    }
}
int main()
{
    int option,temp;
    printf("1. insert at beginning\t 2. insert at middle\t 3. insert at end \t 4. Delete at beginning \t 5.Delete at middle \t6.Delete at end \t7.Display\t 8. Exit");
    while(1)
    {
        printf("\nEnter your option:");
        scanf("%d",&option);
        switch(option)
        {
            case 1:insertion_atBegining();
                    Display();
                    break;
            case 2:insertion_atmiddle();
                    Display();
                    break;
            case 3:insertion_atending();
                    Display();
                    break;
            case 4:Delete_Atstart();
                    printf("starting element is deleted.\n");
                    printf("Now List is:");
                    Display();
                    break;
            case 5:Delete_middle();
                    printf("Now List is:");
                    Display();
                   break;
            case 6:Delete_atend();
            printf("last element is deleted.\n");
                    printf("Now List is:");
                    Display();
                    break;
            case 7:Display();
                    break;
            case 8:exit(1);
                    break;
            default:printf("\n please choose valid option");      
        }
    }
}
