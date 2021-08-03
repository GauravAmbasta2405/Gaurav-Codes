#include<stdio.h>
int main()
{
	int i,n;
	printf("print all natural number from 1 to: ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("%d\n",i);
		i++;
	}
	return 0;
}
