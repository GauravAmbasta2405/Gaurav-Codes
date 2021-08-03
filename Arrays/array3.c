#include<stdio.h>
void printKMax(int arr[],int n,int k)
{
	int i,j,max;
	for(i=0;i<=n-k;i++)
	{
		max=arr[i];
		for(j=1;j<k;j++)
		{
			if(arr[i+j]>max)
			max=arr[i+j];
		}
		printf("%d  ''",max);
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
	int k;
	printf("Enter the size of k: ");
	scanf("%d",&k);
	printKMax(arr,n,k);
	return 0;
}
