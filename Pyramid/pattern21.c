#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=0;i<4;i++)
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
	return 0;
}
