#include<iostream>
using namespace std;
int max(int a,int b,int c)
{
	if(a>b && a>c)
	return a;
	else if(b>a && b>c)
	return b;
	else
	return c;
}
int min(int a,int b,int c)
{
	if(a<b && a<c)
	return a;
	else if(b<a && b<c)
	return b;
	else
	return c;
}

int main()
{
	int a,b,c;
	cout<<"Enter the values of a,b and c: ";
	cin>>a>>b>>c;
	cout<<"Maximum: "<<max(a,b,c)<<endl;
	cout<<"Minimum: "<<min(a,b,c)<<endl;
	return 0;
}
