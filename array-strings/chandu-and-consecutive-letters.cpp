/**
PROBLEM URL https://www.hackerearth.com/code-monk-array-strings/algorithm/chandu-and-consecutive-letters/
Removing Consecutive Letters
**/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int index = 1;
		for(;index < s.length();index++){
			if(s[index] == s[index-1]){				
				s.erase(index,1);
				index--;
			}
		}
		cout<<s<<endl;
	}
    return 0;
}
