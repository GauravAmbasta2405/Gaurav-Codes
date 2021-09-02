#include<iostream>
using namespace std;
int clearBit(int n,int pos)
{
	int mask= ~(1<<pos);
	return(n & mask);
}
int main()
{
	//masking is nothing but its tells us the prsence of 0 and 1 at which position
	//in masking we store the complement of 1<<pos
	//finally we will be retuning this mask by doing it & with the original number
	cout<<clearBit(5,2)<<endl;
	return 0;
}
