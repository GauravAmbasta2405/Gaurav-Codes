#include<iostream>
using namespace std;
int LinearSearch(int arr[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			return i;
		}
	}
	return -1;
}
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
	int key;
	cout<<"Enter the key: ";
	cin>>key;
	cout<<LinearSearch(arr,n,key)<<endl;
}
