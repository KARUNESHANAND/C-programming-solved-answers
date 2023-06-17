#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    char name[35];
    int employee_id;
    char vaccination_detail[10]
    struct node *next;
    int age;
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
        printf("________________PATIENT'S VACCINATION FORM____________________________\n");
        printf("OPTIONS TO FILL THE FORM : \n");
        printf("1.PRESS '1' TO ENTER PATIENT DETAILS\n");
        printf("2.PRESS '2' TO REMOVE THE PATIENT FROM LIST \n");
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
    printf("ENTER THE PATIENT'S AGE : ");
    scanf("%d", &temp->age);
   
    printf("ENTER THE PATIENTS VACCINATION DETAIL : ");
    scanf("%d", &temp->vaccination_detail);
    printf("ENTER THE PATIENTS EMPLOYEE ID : ");
    scanf("%s", &temp->employee_id);


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
        printf("%d.%s(%d)(%d)\n",c,r->name,r->employee_id,r->vaccination_detail,r->age);
        r=r->next;
    }
}
