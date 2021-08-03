#include<stdio.h>
int main()
{
	int i,j,k,l,m,n,p,q;
	for(i=0;i<4;i++)
	{
		for(j=0;j<3-i;j++)
		printf(" ");
		for(k=0;k<=i;k++)
		printf("*");
		for(l=0;l<i;l++)
		printf("*");
		printf("\n");
		/*for(m=0;m<3;m++)
		{
			for(n=0;n<m;n++)
			printf(" ");
			for(p=0;p<3-m;p++)
			printf("*");
			for(q=0;q<2-m;q++)
			printf("*");
			
		}*/
	}
}
