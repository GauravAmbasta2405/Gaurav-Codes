#include<iostream>
bool ispowerof2(int n)
{
	return(n && !(n & (n-1)));  // if number is power of 2 then returns true else false
}                               // we can do this by using not operator 
using namespace std;            // any number which is power of 2 has only 1 set bit and if you subtract it with 1 and do & with original number then it will always gives zero
int main()
{
	cout<<ispowerof2(8)<<endl;
	return 0;
}
