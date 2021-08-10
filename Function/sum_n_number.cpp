#include<iostream>
using namespace std;
int sum(int n)
{
	int ans=0;
	int i;
	for(i=1;i<=n;i++)
	{
		ans+=i;
	}
	return ans;
}
int main()
{
	int n;
	cout<<"Enter number: ";
	cin>>n;
	cout<<sum(n)<<endl;
	return 0;
	
}
