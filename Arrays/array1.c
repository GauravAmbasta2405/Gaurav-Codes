#include<stdio.h>
#include<limits.h>
void thirdLargest(int arr[],int arr_size)
{
	int i;
	
	if(arr_size<3)
	{
			printf("Invalid input");
			return ;
	}
	
	int first= arr[0];
	
	for(i=1;i<arr_size;i++)
		if(arr[i]>first)
		first=arr[i];
	int second = INT_MIN; //lowest
	for(i=0;i<arr_size;i++)
		if(arr[i]>second && arr[i]<first)
		second=arr[i];
	int third = INT_MIN;
	for(i=0;i<arr_size;i++)
		if(arr[i]>third && arr[i]<second)
		third=arr[i];
	printf("The third largest element is %d",third);
}
int main()
{
		int n,i;
		int arr[n];
		printf("Enter the size: ");
		scanf("%d",&n);
		printf("Enter the elements: ");
		for(i=0;i<n;i++)
			{
				scanf("%d",&arr[i]);
			}
		thirdLargest(arr,n);
		return 0;
}

			
		
	
