#include<stdio.h>
int main()
{
	int n;
	int i,position,insitem;
	printf("Enter the size: ");
	scanf("%d",&n);
	int arr[n], temp[n+1];
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be inserted: ");
	scanf("%d",&insitem);
	printf("Enter the position: ");
	scanf("%d",&position);
	position=position-1;
	for(i=0;i<=n;i++)
	{
		if(i<position)
		{
			temp[i]=arr[i];
		}
		if(i>position)
		{
			temp[i]=arr[i-1];
		}
		if(i==position)
		{
			temp[i]=insitem;
		}
	}
	printf("Array after inserting: ");
	for(i=0;i<=n;i++)
	{
		printf("%d ",temp[i]);
	}
	return 0;
}
