#include<stdio.h>

struct patient
{
    int hospital_number;
    char name_patient[50];
    int age;
    int token_number;
    int height;
    int weight;
    char disease[300];
};

void quickSort(int low,int high,struct patient number[])
{
    if(low<high)
    {
        int p=low;
        int i=low,j=high;
        while(i<j)
        {
            while(number[i].token_number<number[p].token_number && i<high)
            {
              i++;
            }
            while(number[j].token_number>number[p].token_number)
            {
                j--;
            }
            if(i<j)
            {
                struct patient temp=number[i];
                number[i]=number[j];
                number[j]=temp;
            }
        }
        struct patient temp=number[p];
        number[p]=number[j];
        number[j]=temp;
        quickSort(low,j-1,number);
        quickSort(j+1,high,number);
    }
}

int main()
{
    int n;
    printf("Enter number of patients: ");
    scanf("%d",&n);
    struct patient p[n];
    for(int i=0;i<n;i++)
    {
        printf("\n_____________PATIENT FORM_________________\n");
        printf("Enter patient's Hospital Number: ");
        scanf("%d",&p[i].hospital_number);
        printf("Enter patient's Name: ");
        scanf("%s", p[i].name_patient);
        printf("Enter patient's Age: ");
        scanf("%d",&p[i].age);
        printf("Enter patient's Token Number: ");
        scanf("%d",&p[i].token_number);
        printf("Enter patient's Height in cms: ");
        scanf("%d",&p[i].height);
        printf("Enter patient's Weight in kgs: ");
        scanf("%d",&p[i].weight);
        printf("Enter patient's Disease: ");
        scanf("%s", p[i].disease);
    }

    quickSort(0,n,p);

    for(int i=0;i<n;i++)
    {
        printf("%d %s\n",p[i].token_number,p[i].name_patient);
    }
    return 0;
}