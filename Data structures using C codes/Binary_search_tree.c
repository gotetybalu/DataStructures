//Binary search tree and its operations
#include<stdio.h>
#include<stdlib.h>
struct BSTNode
{
    int Data;
    struct BSTNode *Right;
    struct BSTNode *Left;
};
struct BSTNode * create_new(int Data)
{
    struct BSTNode *new_node=(struct BSTNode*)malloc(sizeof(struct BSTNode*));
    new_node->Data=Data;
    new_node->Left=NULL;
    new_node->Right=NULL;
}

struct BSTNode *insertion(struct BSTNode *my_node,int Data)
{
    if(my_node==NULL)
        return create_new(Data);
    else if(Data < my_node->Data)
        my_node->Left=insertion(my_node->Left,Data);
    else
        my_node->Right=insertion(my_node->Right,Data);
    return my_node;
}

void inorder_traversal(struct BSTNode *my_node)
{
    if(my_node!=NULL)
    {
        inorder_traversal(my_node->Left);
        printf("%d ",my_node->Data);
        inorder_traversal(my_node->Right);
    }        
}

void preorder_traversal(struct BSTNode *my_node)
{
    if(my_node!=NULL)
    {
        printf("%d ",my_node->Data);
        preorder_traversal(my_node->Left);
        preorder_traversal(my_node->Right);
    }
    
}

void postorder_traversal(struct BSTNode *my_node)
{
    if(my_node!=NULL)
    {
        postorder_traversal(my_node->Left);
        postorder_traversal(my_node->Right);
        printf("%d ",my_node->Data);
    }
}

int max_value(struct BSTNode *my_node)
{
    if(my_node->Right==NULL)
        return my_node->Data;
    else
        return max_value(my_node->Right);
    
}


int min_value(struct BSTNode *my_node)
{
    if(my_node->Left==NULL)
        return my_node->Data;
    else
        return min_value(my_node->Left);
    
}

int Height(struct BSTNode *my_node)
{
    int get_max(int a, int b)
    {
    if(a>b)
        return a;
    return b;
    }
    if(my_node==NULL)
        return -1;
    else
        return get_max(Height(my_node->Left),Height(my_node->Right))+1;
    
}
int search(struct BSTNode *my_node,int value)
{
    if(my_node==NULL)
        return 0;
    else
    {
        if(value==my_node->Data)
            return 1;
        else if(value>my_node->Data)
            return search(my_node->Right,value);
        else
            return search(my_node->Left,value);
    }
    }
int main()
{
    int option,value,k,num;
    struct BSTNode *root=NULL;
    printf("1.Insert\t2.preorder\t3.Inorder\t4.postordfer\5.Maximum value\t6.Minimum value\t7.Exit\n");
    while(1)
    {
        printf("Enter your option\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1: printf("enter value:");
                    scanf("%d",&value);
                    root=insertion(root,value);
                    printf("Node inserted\n");
                    printf("\n");
                    break;
            case 2:inorder_traversal(root);
                    printf("\n");
                    break;
            case 3:preorder_traversal(root);
                    printf("\n");
                    break;
            case 4:postorder_traversal(root);
                    printf("\n");
                    break;
            case 5: k=max_value(root);
                    printf("max value %d\n",k);
                    break;
            case 6:k=min_value(root);
                    printf("Minvalue %d\n",k);
                    break;
            case 7:k=Height(root);
                   printf("height of the tree is %d\n",k);
                    break;
            case 8:printf("Enter number for search in the tree:");
                    scanf("%d",&num);
                    k=search(root,num);
                    if(k==0)
                        printf("The number is not found in Tree\n");
                    else
                        printf("%d\n is found",num);
                    break;
            case 9:exit(0);
                    break;
            default:printf("please choose valid option");
        }
    }
}
