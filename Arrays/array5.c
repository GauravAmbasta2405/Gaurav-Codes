#include<stdio.h>
void CountingEvenOdd(int arr[],int size)
{
	int evencount=0;
	int oddcount=0;
	int i;
	for(i=0;i<size;i++)
	{
		if(arr[i]&1==1)
		oddcount++;
		else
		evencount++;
		
	}
	printf("Even element is %d",evencount);
	printf("\nOdd element is %d",oddcount);
	
}
int main()
{
	int n;
	printf("Enter the size: ");
	scanf("%d",&n);
	int arr[n];
	int i;
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	CountingEvenOdd(arr,n);
	return 0;
}
