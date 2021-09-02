#include<iostream>
using namespace std;
int getBit(int n,int pos)         // if condition is true then bit is 1 else it 0
{
	return(n &(1<<pos)!=0);       //formula for getbit: n & (1<<i) where i is the position of the number in binary form
                                   	
}
int main()
{
	cout<<getBit(5,2)<<endl;
	return 0;
}
