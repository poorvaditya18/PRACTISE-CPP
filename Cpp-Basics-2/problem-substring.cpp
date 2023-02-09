#include<bits/stdc++.h>
using namespace std;

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
 	string s="atcoder";

 	int l,r;
 	cin>>l>>r;

 	cout<<s.substr(l-1,r-l+1);


 
	return 0;

}