#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int pivort=0;
	int i=-1;
	int temp;
	for(int j=0;j<n;j++)
	{
		if(a[j]<pivort)
		{
			i++;
			swap(a[j],a[i]);
			
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
