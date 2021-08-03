#include<stdio.h>
void main()
{
	//int n=60;
	int a=0;
	int b=1;
	int c= a+b;
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",c);
		//printf("\n");
		c=a+b;
		a=b;
		b=c;
	}
	printf("\n");
}
}
