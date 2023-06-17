#include<stdio.h>

struct patient
{
    int hNum;
    char name[40];
    int age;
    int tNum;
    int height;
    int weight;
    char reason[200];
};

void quickSort(int low,int high,struct patient l[])
{
    if(low<high)
    {
        int p=low;
        int i=low,j=high;
        while(i<j)
        {
            while(l[i].tNum<l[p].tNum && i<high)
            {
              i++;
            }
            while(l[j].tNum>l[p].tNum)
            {
                j--;
            }
            if(i<j)
            {
                struct patient temp=l[i];
                l[i]=l[j];
                l[j]=temp;
            }
        }
        struct patient temp=l[p];
        l[p]=l[j];
        l[j]=temp;
        quickSort(low,j-1,l);
        quickSort(j+1,high,l);
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
        printf("\nEnter %d patient's following details:-\n",i+1);
        printf("Enter patient's Hospital Number: ");
        scanf("%d",&p[i].hNum);
        printf("Enter patient's Name: ");
        scanf("%s", p[i].name);
        printf("Enter patient's Age: ");
        scanf("%d",&p[i].age);
        printf("Enter patient's Token Number: ");
        scanf("%d",&p[i].tNum);
        printf("Enter patient's Height: ");
        scanf("%d",&p[i].height);
        printf("Enter patient's Weight: ");
        scanf("%d",&p[i].weight);
        printf("Enter patient's Reason(Disease): ");
        scanf("%s", p[i].reason);
    }

    quickSort(0,n,p);

    for(int i=0;i<n;i++)
    {
        printf("%d %s\n",p[i].tNum,p[i].name);
    }
    return 0;
}