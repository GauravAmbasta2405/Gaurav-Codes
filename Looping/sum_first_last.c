#include<stdio.h>
int main()
{
	int n,firstdigit,lastdigit,sum=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	lastdigit=n%10;
	while(n>=10)
	{
		n=n/10;
		
	}
	firstdigit=n;
	sum=firstdigit+lastdigit;
	printf("sum of first digit and last digit of a number is %d",sum);
	return 0;
}
