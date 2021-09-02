#include<iostream>
using namespace std;
int setBit(int n,int pos)
{
	return(n | (1<<pos));     // it will returns the number after setting the bit 1 at the giiven position
}
int main()
{
	cout<<setBit(5,1)<<endl;
	return 0;
}
