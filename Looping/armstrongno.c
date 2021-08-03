#include<stdio.h>
int main()
{
	int n,i,temp,sum=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		i=n%10;
		sum+=i*i*i;
		n/=10;
	}
	if(sum==temp)
	{
		printf("The give number %d is armstrong number",temp);
	}
	else
	{
		printf("The given number %d is not a armstrong number",temp);
	}
	return 0;
}
