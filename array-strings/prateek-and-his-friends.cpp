/** 
FINDING if a consecutive sequence adds up to a number
PROBLEM URL: https://www.hackerearth.com/code-monk-array-strings/algorithm/chandu-and-consecutive-letters/
**/
#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,sum;
		cin>>n>>sum;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}

		int index = 0;
		int tmpSum = 0;
		int canInvite = false;

		for(int i = 0; i < n; ++i){
			tmpSum = arr[i];
			if(tmpSum != sum){
				for(int j = i+1; j < n; ++j){
					tmpSum += arr[j];
					if(tmpSum > sum)
						break;
					if(tmpSum == sum){
						canInvite = true;
						break;
					}
				}
				if(canInvite)
					break;

			}else{
				canInvite = true;
				break;
			}
		}

		if(canInvite)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;


	}
    return 0;
}
