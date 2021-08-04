#include<iostream>
using namespace std;
int find_num(int num)
{
	if(num%2==0)
	{
		cout<<"Even"<<endl;
	}
	else
	{
		cout<<"Odd"<<endl;
	}
}
int main()
{
	int num;
	cout<<"Enter the number: ";
	cin>>num;
	find_num(num);
	return 0;
}
