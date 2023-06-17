#include<stdio.h>

struct mobile_phone
{
    char model_name[30];
    int year;
    int camera_resolution;
    int RAM;
    int memory_card_size;
    char Operating_System[10];
};

void InsertionSort(struct mobile_phone l[],int n)
{
    int j;
    for(int i=1;i<n;i++)
    {
        int key=l[i].RAM;
        j=i-1;
        while(j>=0 && l[j].RAM>key) 
        {
            l[j+1]=l[j];
            j=j-1;
        }
        l[j+1].RAM=key;
    }
}

void main()
{
    int n;
    printf("ENTER NUMBER OF MOBILE PHONES TO BE SORTED : ");
    scanf("%d",&n);
    struct mobile_phone d[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter Model Name: ");
        scanf("%s", d[i].model_name);
        printf("Enter Year: ");
        scanf("%d", &d[i].year);
        printf("Enter resolution of camera : ");
        scanf("%d", &d[i].camera_resolution);
        printf("Enter RAM Size : ");
        scanf("%d", &d[i].RAM);
        printf("Enter Memory Card Size : ");
        scanf("%d", &d[i].memory_card_size);
        printf("Enter Operating System: ");
        scanf("%s", d[i].Operating_System);
        printf("\n");
    }
    InsertionSort(d,n);
    for(int i=0;i<n;i++)
    {
        printf("%s %d\n",d[i].model_name,d[i].RAM);
    }
}