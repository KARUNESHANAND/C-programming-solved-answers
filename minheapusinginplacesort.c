#include<stdio.h>
#include<limits.h>

int HEAP[100], Size_of_heap;

void Init()
{
    Size_of_heap = 0;
    HEAP[0] = -INT_MAX;
}

void Insert(int element)
{
    Size_of_heap++;
    HEAP[Size_of_heap] = element;
    int present_cond = Size_of_heap;
    while (HEAP[present_cond / 2] > element)
    {
        HEAP[present_cond] = HEAP[present_cond / 2];
        present_cond /= 2;
    }
    HEAP[present_cond] = element;
}

int Delete_minimum()
{
    int minElement, lastElement, child, present_cond;
    minElement = HEAP[1];
    lastElement = HEAP[Size_of_heap--];
    for (present_cond = 1; present_cond * 2 <= Size_of_heap; present_cond = child)
    {
        child = present_cond * 2;
        if (child != Size_of_heap && HEAP[child + 1] < HEAP[child])
        {
            child++;
        }
        if (lastElement > HEAP[child])
        {
            HEAP[present_cond] = HEAP[child];
        }
        else
        {
            break;
        }
    }
    HEAP[present_cond] = lastElement;
    return minElement;
}

int main()
{
    int n;
    printf("Enter the number of elements you want to input : ");
    scanf("%d", &n);
    int element;
    Init();
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &element);
        Insert(element);
    }
    printf("The Sorted Array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", Delete_minimum());
    }
    printf("\n");
    return 0;
}