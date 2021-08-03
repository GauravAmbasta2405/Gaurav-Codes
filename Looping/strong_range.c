#include<stdio.h>
int main()
{
	int i,j,n,temp1,temp2,fact,sum=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=0;
		temp1=i;
		temp2=i;
		while(temp1>0)
		{
			j=temp1%10;
			sum+=getfactorial(j);
			temp1/=10;
		}
		if(sum==temp2)
		{
			printf("%d ",sum);

		}
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
