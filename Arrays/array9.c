#include<stdio.h>
int main()
{
	int n,pos,i;
	printf("Enter the size: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the position from which the number has to be deleted: ");
	scanf("%d",&pos);
	for(i=pos;i<n;i++)
	{
		arr[i]=arr[i+1];
		n--;
	}
	printf("Array after deletion: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
