#include<iostream>
using namespace std;
int numberofones(int n)
{
	int count=0;
	while(n)    // this means n is greater than 0 or n is not equal to zero
	{
		n= n & (n-1); // this has same bits as of n except the rightmost set bit
		count++;
	}
	return count ;
}
int main()
{
	cout<<numberofones(19)<<endl;
	return 0;
}
