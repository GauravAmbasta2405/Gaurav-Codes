#include<stdio.h>
int main()
{
	int i,n,temp,fact,sum=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		i=n%10;
		sum+=getfactorial(i);
		n/=10;
	}
	if(sum==temp)
	{
		printf("The given number %d is a strong number",temp);
	}
	else{
		printf("The given number %d is not a strong number",temp);
	}
}
int getfactorial(int number)
{
	int fact=1;
	int i;
	for(i=1;i<=number;i++)
	{
		fact=fact*i;
	}
	return fact;
}
