#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int num)
{
	int i;
	for(i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int a,b;
	cin>>a>>b;
	int i;
	for(i=a;i<=b;i++)
	{
		if(isprime(i))
		{
			cout<<i<<endl;
		}
	}
}
