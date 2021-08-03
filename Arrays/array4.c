#include<stdio.h>
void pushzerostoend(int arr[],int n)
{
	int count=0;
	int i;
	for(i=0;i<n;i++)
		if(arr[i]!=0)
			arr[count++]=arr[i];
	while(count<n)
		arr[count++]=0;
}
	
void print(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}
	
}
int main()
{
	int i,n;
	printf("Enter the size: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array: ");
	print(arr,n);
	pushzerostoend(arr,n);
	printf("\nNew array: ");
	print(arr,n);
	return 0;
}
