#include <stdio.h>
int linearsearch_recursion(int arr[], int value, int index, int n)
{
    int position = 0;
 
    if(index >= n)
    {
        return 0;
    }
    else if (arr[index] == value)
    {
        position = index + 1;
        return position;
    }
    else
    {
        return linearsearch_recursion(arr, value, index+1, n);
    }
    return position;
}
int main()
{
    int n, value, position, m = 0, arr[100];
    printf("Enter the total number of elements to be inserted in the array  ");
    scanf("%d", &n);
 
    printf("Enter the elements in the array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    printf("Enter the element to be searched in the array :  ");
    scanf("%d", &value);
 
    position =  linearsearch_recursion(arr, value, 0, n);
    if (position != 0)
    {
        printf("Element found at position %d ", position);
    }
    else
    {
        printf("ELEMENT NOT AVAILABLE IN THE ARRAY .");
    }
    return 0;
}
