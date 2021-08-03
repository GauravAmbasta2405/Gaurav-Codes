#include<stdio.h>
void CountingOdd(int arr[],int size)
{
	int positive=0;
	int negative=0;
	int i;
	for(i=0;i<size;i++)
	{
		if(arr[i]>0)
		positive++;
		else
		negative++;
		
	}
	//printf("Even element is %d",evencount);
	printf("\nNegative element is %d",negative);
	
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
	CountingOdd(arr,n);
	return 0;
}
