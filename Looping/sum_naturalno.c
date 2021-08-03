#include<stdio.h>
int main()
{
	int i,n;
	int sum=0;
	printf("How many numbers: ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		sum+=i;
		i++;
		
	}
	printf("%d",sum);
	return 0;
}
