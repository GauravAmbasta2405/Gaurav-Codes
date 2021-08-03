#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=0;i<=3;i++)
	{
		for(j=3;j>=3-i;j--)
		{
			printf("%d",j);
		}
		for(k=0;k<3-i;k++)
		{
			printf(" ");
		}
		printf("\n");
	}
	int n,m,l;
	for(n=0;n<3;n++)
	{
		for(l=3;l>n;l--)
		{
			printf("%d",l);
		}
		for(m=0;m<=n;m++)
		{
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
