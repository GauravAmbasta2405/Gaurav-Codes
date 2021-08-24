#include<iostream>
#include<algorithm>
using namespace std;
void reverse(string str)
{
	for(int i =str.size()-1;i>=0;i--)
	{
		cout<<str[i];
	}
}
int main()
{
	string str;
	getline(cin,str);
	reverse(str);
	return 0;

}
