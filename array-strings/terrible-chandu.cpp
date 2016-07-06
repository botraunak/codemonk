/**
PROBLEM URL https://www.hackerearth.com/code-monk-array-strings/algorithm/terrible-chandu/
Reversing a String using naive logic
**/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		string s,r;
		cin>>s;
		int len =0;
		for(;s[len] != '\0';len++);

		int i = 0;
		for(;i<len;i++)
			r[i] = s[len-1-i];

		r[i] = '\0';

		for (i = 0; i < len; ++i)
			cout<<r[i];
		cout<<endl;

				
	}
}
