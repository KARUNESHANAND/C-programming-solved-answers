#include<stdio.h>  
#include<stdlib.h>  
struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head;  
  
void insert_at_beginning();   
void insert_at_end();    
void delete_at_beginning();  
void delete_at_last();    
void display();    
void main ()  
{  
    int choice =0;  
    while(choice != 7)   
    {  
        printf("\n              MENU               \n");  
        printf("\n1.Insert in begining\n2.Insert at last\n3.Delete from Beginning\n4.Delete from last\n5.Display\n6.Exit\n");  
        printf("\nENTER THE CHOICE : \n");         
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            insert_at_beginning();      
            break;  
            case 2:  
            insert_at_end();         
            break;  
            case 3:  
            delete_at_beginning();       
            break;  
            case 4:  
            delete_at_last();        
            break;  
            case 5:  
            display();        
            break;  
            case 6:
            printf("OPERATION EXITED");
            exit(0);    
            default:  
            printf("PLEASE ENTER A VALID CHOICE .");  
        }  
    }  
}  
void insert_at_beginning()  
{  
    struct node *ptr,*temp;   
    int item;   
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else   
    {  
        printf("\nEnter the value to be inserted : ");  
        scanf("%d",&item);  
        ptr -> data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;  
        }  
        else   
        {     
            temp = head;  
            while(temp->next != head)  
                temp = temp->next;  
            ptr->next = head;   
            temp -> next = ptr;   
            head = ptr;  
        }   
        printf("\nDONE\n");  
    }  
              
}  
void insert_at_end()  
{  
    struct node *ptr,*temp;   
    int item;  
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW\n");  
    }  
    else  
    {  
        printf("\nEnter the value to be inserted : \n");  
        scanf("%d",&item);  
        ptr->data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;    
        }  
        else  
        {  
            temp = head;  
            while(temp -> next != head)  
            {  
                temp = temp -> next;  
            }  
            temp -> next = ptr;   
            ptr -> next = head;  
        }  
          
        printf("\n DONE \n");  
    }  
  
}  
  
void delete_at_beginning()  
{  
    struct node *ptr;   
    if(head == NULL)  
    {  
        printf("\nUNDERFLOW");    
    }  
    else if(head->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("\n DELETION SUCCESSFUL \n");  
    }  
      
    else  
    {   ptr = head;   
        while(ptr -> next != head)  
            ptr = ptr -> next;   
        ptr->next = head->next;  
        free(head);  
        head = ptr->next;  
        printf("\n DELETION SUCCESSFUL \n");  
  
    }  
}  
void delete_at_last()  
{  
    struct node *ptr, *preptr;  
    if(head==NULL)  
    {  
        printf("\nUNDERFLOW");  
    }  
    else if (head ->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("\n DELETION SUCCESFUL \n");  
  
    }  
    else   
    {  
        ptr = head;  
        while(ptr ->next != head)  
        {  
            preptr=ptr;  
            ptr = ptr->next;  
        }  
        preptr->next = ptr -> next;  
        free(ptr);  
        printf("\n DELETION SUCCESFUL \n");  
  
    }  
}   
void display()  
{  
    struct node *ptr;  
    ptr=head;  
    if(head == NULL)  
    {  
        printf("\n EMPTY  ");  
    }     
    else  
    {  
        printf("\n THE VALUES ARE :  \n");  
          
        while(ptr -> next != head)  
        {  
          
            printf("%d\n", ptr -> data);  
            ptr = ptr -> next;  
        }  
        printf("%d\n", ptr -> data);  
    }  
              
}  