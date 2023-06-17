#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *right;
    int data;
    struct node *left;
    int lcount;
}*root=NULL;
int choice=0;

struct node *new(int x)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;
    temp->lcount=0;

    return temp;
}

struct node *insert(struct node *root,int x)
{
    if(root==NULL)
    {
        return new(x);
    }
    else if(x > root->data)
    {
        root->right=insert(root->right,x);
    }
    else
    {
        root->left=insert(root->left,x);
    }
    return root;
}

struct node *minValueNode(struct node *node)
{
    struct node *r=node;
    while(r!=NULL && r->left!=NULL)
    {
        r=r->left;
    }
    return r;
}

struct node *maxValueNode(struct node *node)
{
    struct node *r= node;
    while(r!=NULL && r->right!=NULL)
    {
        r=r->right;
    }
    return r;
}

void inorder(struct node* node)
{
    if(node!=NULL)
    {
        inorder(node->left);
        printf("%d ", node->data);
        inorder(node->right);
    }
}

struct node *Kth(struct node* node,int k)
{
    if(root==NULL)
    {
        return NULL;
    }
    int count=node->lcount+1;
    if(count==k)
    {
        return node;
    }
    else if(count>k)
    {
        return Kth(node,k);
    }
    else
    {
        return Kth(node,k - count);
    }
}

struct node *delete(struct node *root,int x)
{
    if(root==NULL)
    {
        return NULL;
    }
    else if(x < root->data)
    {
        root->left= delete(root->left,x);
    }
    else if(x > root->data)
    {
        root->right= delete(root->right,x);
    }
    else
    {
        if(root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        else
        {
            struct node *temp=minValueNode(root->right);
            root->data=temp->data;
            root->right= delete(root->right,temp->data);
        }
    }
}

void display(struct node *node,int space)
{
    if(node==NULL)
    {
        return ;
    }
    space+=3;
    display(node->right,space);
    printf("\n");
    for(int i=3;i<space;i++)
    {
        printf(" ");
    }
    printf("%d", node->data);
    display(node->left,space);
}

void main()
{
    while(choice!=7)
    {
        printf("\nEnter number between 1 and 7  : ");
        printf("\n1. Insert an element\n2. Delete an element\n3. Display Sorted Order\n4. Min & Max Element\n5. Kth Minimum element\n6. Display\n7. Exit");
        printf("\nEnter your Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                int element;
                printf("Enter data: ");
                scanf("%d",&element);
                root=insert(root,element);
                break;
            }
            case 2:
            {
                int element;
                printf("Enter data to be deleted: ");
                scanf("%d", &element);
                root=delete(root,element);
                break;
            }
            case 3:
            {
                inorder(root);
                break;
            }
            case 4:
            {
                struct node *min=minValueNode(root);
                struct node *max=maxValueNode(root);
                printf("The smallest value is: %d\n",min->data);
                printf("The largest value is: %d",max->data);
                break;
            }
            case 5:
            {
                int k;
                printf("Enter K: ");
                scanf("%d", &k);
                struct node *ans=Kth(root,k);
                printf("%d", ans->data);
                break;
            }
            case 6:
            {
                display(root,0);
                break;
            }
            case 7:
            {
                printf("Exit the operation.");
                break;
            }
            default: break;
        };
    }
}
