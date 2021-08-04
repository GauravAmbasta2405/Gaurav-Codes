#include<iostream>
using namespace std;
int swap(int a, int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<a<<" "<<b<<endl;
}
int main()
{
	int a,b;
	cout<<"Enter the values of a and b: ";
	cin>>a>>b;
	cout<<"Values before swapping: ";
	cout<<a<<" "<<b<<endl;
	cout<<"Values after swapping:  ";
	swap(a,b);
	return 0;
}
