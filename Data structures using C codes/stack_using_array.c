#include<stdio.h>
#include<stdlib.h>
int stack[100],top=-1,size; //Global declaration
void push()
{
    if(top==size-1)
        printf("Stack overflow\n");
    else
    {
        top++;
        printf("Enter elements:\n");
        scanf("%d",&stack[top]);
    }
}
void pop()
{
    int temp;
    if(top==-1)
        printf("Stack underflow\n");
    else
    {
        temp=stack[top];
        top--;
        printf("Popped element is :%d\n",temp);
    }      
}
void peek()
{
    if(top==-1)
        printf("stack is empty\n");
    else
        printf("top of the stack is :%d\n",stack[top]);
}
void empty()
{
    if(top==-1)
        printf("stack is empty:\n");
    else
        printf("stack is not empty:\n");
}
void display()
{
    if(top==-1)
        printf("stack is empty:\n");
    else
        for(int i=0;i<=top;i++)
            printf("%d ",stack[i]);
}
int main()
{
    int option;
    printf("Enter size of the stack:\n");
    scanf("%d",&size);
    if(size<0)
        printf("Enter positive size");
    else
    {
            printf("1.push 2.pop 3.top of the stack 4.is empty 5.Display 6.exit:\n");
        while(1)
        {
            printf("\nEnter option:\n");
            scanf("%d",&option);
            switch(option)
            {
                case 1:push();
                        break;
                case 2:pop();
                        break;
                case 3:peek();
                    break;
                case 4:empty();
                    break;
                case 5:display();
                        break;
                case 6:exit(1);
                default:printf("\n you entered invalid option:\n");
            }
        }
    }
}
