#include<iostream>
using namespace std;
int fact(int n)
{
	int factorial=1;
	int i;
	for(i=2;i<=n;i++)
	{
		factorial*=i;
	}
	return factorial;
}
int main()
{
	int i,n;
	cin>>n;
	int ans=fact(n);
	cout<<ans<<endl;
	return 0;
}
