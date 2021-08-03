#include<stdio.h>
int main()
{
	int i,j,n,sum,temp;
	printf("Enter the number:  ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		temp=i;
		sum=0;
		for(j=1;j<i;j++)
		{
			if(temp%j==0)
			{
				sum+=j;
			}
		}
		if(sum==temp)
		printf("%d ",temp);
	}
	return 0;
}
		
		
	
