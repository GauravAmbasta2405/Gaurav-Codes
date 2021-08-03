#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			printf("The given number %d is non-prime",n);
			break;
		}
	}
	if(i==n)
	{
		printf("The given number %d is prime",n);
		
	}
	return 0;
}
