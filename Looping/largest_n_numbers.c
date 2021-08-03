#include<stdio.h>
int main()
{
	int i,n,num,large=0;
	printf("How many numbers: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the numbers %d: ",i+1);
		scanf("%d",&num);
		if(num>large)
		large=num;
	}
	printf("Largest number is %d",large);
	return 0;
}
