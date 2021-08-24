#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int maxNo = INT_MIN; //gives the smallest integer value
	int minNo = INT_MAX; //gives the largest integer value
	for(int i=0;i<n;i++)
	{
		maxNo = max(maxNo,arr[i]);
		minNo = min(minNo,arr[i]);
	}
	cout<<"Maximum: "<<maxNo<<endl;
	cout<<"minimum: "<<minNo<<endl;
	return 0;
}
