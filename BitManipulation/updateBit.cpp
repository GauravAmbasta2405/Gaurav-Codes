#include<iostream>
using namespace std;
int updateBit(int n,int pos,int value)
{
	int mask = ~(1<<pos);
	n= n & mask;              // instead of doing (1<<pos) we are doing value<<pos as it will help in finding the result directly as if value will be zero then it directly means zero
	return(n | (value<<pos)); // updateBit is the combination of clearbit and set bit
}                            
int main()
{
	cout<<updateBit(5,1,1)<<endl;
	return 0;
	
}
