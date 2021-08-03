#include<stdio.h>
void reversearray(int arr[],int start,int end)
{
	while(start<end)
	{
		
		int temp= arr[start];
		arr[start]= arr[end];
		arr[end]= temp;
		start++;
		end--;
	}
}
void print(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	printf("%d ",arr[i]);
}
int main()
{
	int n,i;
	printf("Enter the size: ");
	scanf("%d",&n);
	int arr[n];   // array is always make of constant number and not the variables
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array: ");
	print(arr,n);
	reversearray(arr,0,n-1);
	printf("\nReverse array: ");
	print(arr,n);
	return 0;
}	
