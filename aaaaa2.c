#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int age;
    char name[35];
    int phone_number;
    struct node *next;
}
*head=NULL;
int selection;
void add_patients_details();
void delete_patients_details();
void display_patients_details();
void main()
{
    while(selection!=4)
    {
        printf("________________PATIENT'S ADMISSION FORM____________________________\n");
        printf("OPTIONS TO FILL THE FORM : \n");
        printf("1.PRESS '1' TO ENTER PATIENT DETAILS\n");
        printf("2.PRESS '2' TO SEE PATIENTS SEEN IN THE CLINIC\n");
        printf("3.PRESS '3' TO DISPLAY THE REMAINING PATIENTS\n");
        printf("4.PRESS '4' TO EXIT THE OPERATION\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d",&selection);
        switch(selection)
        {
            case 1: add_patients_details(); break;
            case 2: delete_patients_details(); break;
            case 3: display_patients_details(); break;
            case 4: printf("EXIT OPERATION "); break;
            default: printf("INVALID INPUT ENTER NUMBER BETWEEN '1' AND '4'\n");
        };
    }
}
void add_patients_details()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("ENTER THE PATIENT'S NAME: ");
    scanf("%s", temp->name);
    printf("ENTER THE AGE OF THE PATIENT: ");
    scanf("%d", &temp->age);
    printf("ENTER THE PATIENTS PHONE NUMBER: ");
    scanf("%d", &temp->phone_number);

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

void delete_patients_details()
{
    head=head->next;
}

void display_patients_details()
{
    int c=0;
    struct node *r;
    r=head;
    while(r!=NULL)
    {
        c++;
        printf("%d.%s(%d)(%d)\n",c,r->name,r->age,r->phone_number);
        r=r->next;
    }
}
