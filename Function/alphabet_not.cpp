#include<iostream>
using namespace std;
char find_character(char ch)
{
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		cout<<"Alphabet"<<endl;
	}
	else
	{
		cout<<"Not an alphabet"<<endl;
	}
}
int main()
{
	char ch;
	cout<<"Enter the character: ";
	cin>>ch;
	find_character(ch);
	return 0;
}
