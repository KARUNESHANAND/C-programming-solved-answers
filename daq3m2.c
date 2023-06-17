#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int registration_number , age ;
    long int phone_number ;
    char name[50];
    clrscr();
    struct node *next;

}NODE;
NODE *insert(NODE *HEAD);
NODE *delete_node();
void display(NODE *HEAD);

void main()
{
    int selection ;
    NODE *HEAD=NULL ;
    while(1)
    {
        printf("_________________GAMING EVENT_____________________\n");
        printf("APPLICATION FORM : \n");
        printf("1.Enter details of the participant \n");
        printf("2.Delete player details \n");
        printf("3.Display all the players \n");
        printf("4.Exit from operation \n");
        printf("Enter your selection: ");
        scanf("%d",&selection);
        switch(selection)
        {

            case 1: HEAD = insert(HEAD); break;
            case 2: HEAD = delete_node(NODE); break;
            case 3: display(HEAD); break;
            case 4: printf("OPERATION EXITED"); break;
            default: printf("INVALID INPUT PLEASE ENTER A CHOICE BETWEEN 1 AND 4 \n");break;

        }
    };
    getchar();
}
NODE *insert(NODE *HEAD)
{
    NODE *head , *temp , *nn ;
    int cn ;
    cn = 0 ;
    nn = (NODE*)malloc(sizeof(NODE));
    printf("\n Enter the Registration number of the player : ");
    scanf("%d", &nn->registration_number);
    printf("\n Enter the name of the player : ");
    scanf("%s", &nn->name);
    printf("\n Enter the Age of the player : ");
    scanf("%d", &nn->age);
    printf("\n Enter the Phone number of the player : ");
    scanf("%ld", &nn->phone_number);
    nn->next=NULL;
    head=HEAD;
    
    if (head==NULL)
    {
        head=nn;
    }
    else
    {
        temp=HEAD;
        while (temp->next!=NULL)
        {
            if (temp->age==nn->age)
            {
                cn=cn + 1;
            }
            temp=temp->next;
        }
        if (temp->next==NULL && temp->age==nn->age)
        {
            cn++;
        }
        if (cn==5)
        {
            printf("ALREADY FIVE MEMBERS OF THE SAME AGE GROUP REGISTERED SO CANNOT ACCEPT THIS REGISTRATION\n");
            return head ;
        }
        temp->next=nn ;
    }
    return head;
}
void display(NODE *HEAD)
{
    NODE *temp;
    temp=HEAD;
    while (temp!=NULL)
    {
        printf("---------------------------------------");
        printf("Registeration Number : %d\n", temp->registration_number);
        printf("Name of the player : %s\n", temp->name);
        printf("Age of the player : %d\n", temp->age);
        printf("Phone Number : %ld\n", temp->phone_number);
        printf("---------------------------------------");
        temp=temp->next;
    }
    
}
NODE *temp, *p , *n , *head;
int reg_no ;
printf("\n Enter register number to be deleted from the record: ");
scanf("%d",&reg_no);
head=temp=HEAD ;
{
    if (head -> registration_number == reg_no )
    {
        printf("Record Deleted Successfully .");
        return head->next;
    }
    else
    {
        while (temp->next->registration_number !=reg_no)
        {
            temp = temp -> next ;
        }
        p = temp ;
        temp = temp -> next ;
        n = temp -> next ;
        p -> next = n ;
        free(temp);
        printf("Record Deleted.");
        return head ;
    }
}


