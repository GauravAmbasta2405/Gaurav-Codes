#include<stdio.h>
int main()
{
	int n,i,j,count;
	printf("Enter the size: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Unique elements: ");
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			count++;
		}
		if(count==1)
		//printf("Unique elements: ");
		printf("%d ",arr[i]);
	}
	return 0;
	
}
