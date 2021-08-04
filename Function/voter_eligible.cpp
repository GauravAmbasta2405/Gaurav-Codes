#include<iostream>
using namespace std;
int find_age(int age)
{
	if(age>18)
	{
		cout<<"Eligible to vote"<<endl;
	}
	else
	{
		cout<<"Not eligible to vote"<<endl;
	}
}
int main()
{
	int age;
	cout<<"Enter the age: ";
	cin>>age;
	find_age(age);
	return 0;
}
