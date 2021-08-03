#include<stdio.h>
void Copyarray(int arr[],int size)
{
	int arr1[size];
	int i;
	for(i=0;i<size;i++)
	{
		arr1[i]=arr[i];
	}
}
void print(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
	int n,i;
	printf("Enter the size: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Original array:  ");
	print(arr,n);
	Copyarray(arr,n);
	printf("\nNew array: ");
	print(arr,n);
	return 0;
}
