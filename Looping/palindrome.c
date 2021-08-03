#include<stdio.h>
int main()
{
	int n,x,rev=0,dummy;
	printf("Enter a number: ");
	scanf("%d",&n);
	dummy=n;
	while(n!=0)
	{
		x=n%10;
		rev=rev*10+x;
		n=n/10;
	}
	if(dummy==rev)
	
		printf("The given number is palindrome:%d",rev);
		else
		
		
		printf("The given number is not palindrome:%d",rev);
		
	
	return 0;
}
