#include<bits/stdc++.h>
using namespace std;

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
  // a b c d e f g
    string s;
    cin>>s;

    int len = s.length();
    // cout<<len<<endl;
    int middle = (len)/2;
    cout<<s[middle]<<endl;


	return 0;

}