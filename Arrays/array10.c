#include<stdio.h>
int main()
{
	int n,i,j,freq;
	printf("Enter the size: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		freq=0;
		for(j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			freq++;
		}
		printf("The frequency of %d is %d\n",arr[i],freq);
	}

		return 0;
	
}
