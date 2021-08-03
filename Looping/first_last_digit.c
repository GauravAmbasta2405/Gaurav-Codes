#include<stdio.h>
int main()
{
	int n,firstdigit,lastdigit;
	printf("Enter a number: ");
	scanf("%d",&n);
	lastdigit=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	firstdigit=n;
	printf("first digit=%d and last digit=%d",firstdigit,lastdigit);
	return 0; 
}
