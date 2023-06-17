#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int age;
    char name[35];
    int phone_number;
    char city[35];
    struct node *next;
}
*head=NULL;
int selection;
void add_persons_details();
void delete_persons_details();
void display_persons_details();
void main()
{
    while(selection!=4)
    {
        printf("________________PERSON'S DETAILS FORM____________________________\n");
        printf("OPTIONS TO FILL THE FORM : \n");
        printf("1.PRESS '1' TO ENTER PERSON'S DETAILS\n");
        printf("2.PRESS '2' TO SEE PERSON DETAILS\n");
        printf("3.PRESS '3' TO DISPLAY THE PERSON'S DETAILS\n");
        printf("4.PRESS '4' TO EXIT THE OPERATION\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d",&selection);
        switch(selection)
        {
            case 1: add_persons_details(); break;
            case 2: delete_persons_details(); break;
            case 3: display_persons_details(); break;
            case 4: printf("EXIT OPERATION "); break;
            default: printf("INVALID INPUT ENTER NUMBER BETWEEN '1' AND '4'\n");
        };
    }
}
void add_persons_details()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("ENTER THE PERSON'S NAME: ");
    scanf("%s", temp->name);
    printf("ENTER THE AGE OF THE PERSON: ");
    scanf("%d", &temp->age);
    printf("ENTER THE PERSON'S PHONE NUMBER: ");
    scanf("%d", &temp->phone_number);
    printf("ENTER THE PERSON'S CITY: ");
    scanf("%s", temp->city);

    if (head==NULL)
    {
        head=temp;
        head->next=NULL;
    }
    else if(head->next==NULL)
    {
        if(head->age>temp->age)
        {
            head->next=temp;
            temp->next=NULL;
        }
        else
        {
            temp->next=head;
            head=temp;
        }
    }
    else
    {
        struct node *r;
        r=head;
        while(r->next!=NULL)
        {
            if(r->next->age>temp->age)
            {
                r=r->next;
            }
            else
            {
                break;
            }
        }
        if(r==head)
        {
            temp->next=head;
            head=temp;
        }
        else
        {
            temp->next=r->next;
            r->next=temp;
        }
    }
}

void delete_persons_details()
{
    head=head->next;
}

void display_persons_details()
{
    int c=0;
    struct node *r;
    r=head;
    while(r!=NULL)
    {
        c++;
        printf("%d.%s(%d)(%d)%s\n",c,r->name,r->age,r->phone_number,r->city);
        r=r->next;
    }
}
