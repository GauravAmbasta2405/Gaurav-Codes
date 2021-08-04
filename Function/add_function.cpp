#include<iostream>
using namespace std;
int add(int num1,int num2)
{
	int sum=num1+num2;
	cout<<sum<<endl;
}
int main()
{
	int num1,num2;
	cin>>num1>>num2;
	add(num1,num2);
	return 0;
}
