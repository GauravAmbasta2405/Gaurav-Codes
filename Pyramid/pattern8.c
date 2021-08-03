#include<stdio.h>
int main()
{
	int i,j,k,l;
	for(i=0;i<4;i++)
	{
		for(j=0;j<3-i;j++)
		printf(" ");
		for(k=0;k<=i;k++)
		printf("*");
		for(l=0;l<i;l++)
		printf("*");
		printf("\n");
	}
}
