#include<stdio.h>
int main()
{
	int n,x,dummy,rev=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	dummy=n;
	while(n>0)
	{
		x=n%10;
		rev=rev*10+x;
		n=n/10;
	}
	printf("Reverse of a number %d is: %d",dummy,rev);
	return 0;
}
