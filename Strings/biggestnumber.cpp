#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string str;
	str = "456907821";
	sort(str.begin(),str.end(),greater<int>());
	cout<<str<<endl;
	return 0;
}
