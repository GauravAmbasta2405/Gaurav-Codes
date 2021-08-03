#include<stdio.h>
int main()
{
	int n,x,dummy,sum=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	dummy=n;
	while(n>0)
	{
		x=n%10;
		sum=sum+x;
		n=n/10;
		
	}
	printf("sum of a digits of a number %d is %d",dummy,sum);
	return 0;
}
