#include<stdio.h>
int binary_search(int arr[],int high,int low,int element)
{
 int mid;
 mid=(high+low)/2;
 if(low>high)
 {
 return -1;
 }
 else if(arr[mid]==element)
 {
 return mid;
 }
 else if(arr[mid]>element)
 {
 binary_search(arr,mid,low,element);
 }
 else if(arr[mid]<element)
 {
 binary_search(arr,high,mid,element);
 }
 else
 {
 printf("Invalid input");
 }
}
void main()
{
 int n;
 printf("Enter number of elements to be inserted in Array: ");
 scanf("%d",&n);
 int a[n];
 for(int i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 int e,index;
 printf("Enter Element: ");
 scanf("%d",&e);
 index=binary_search(a,n,0,e);
 printf("The required element %d is at %d position.",e,index+1);
}