#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string str = "jdkllabcdeeabd";
	int freq[26];
	for(int i=0;i<26;i++)
	freq[i]=0;
	for(int i=0;i<str.size();i++)
	{
		freq[str[i]-'a']++;
	}
	char ans;
	int maxFreq=-1;
	for(int i=0;i<26;i++)
	{
		if(freq[i]>maxFreq)
		{
			maxFreq=freq[i];
			ans=i+'a';
		}
		
	}
	cout<<maxFreq<<endl;
	cout<<ans<<endl;
	return 0;
}

