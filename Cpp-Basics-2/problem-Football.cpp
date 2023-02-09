#include<bits/stdc++.h>
using namespace std;

void solve(string s)
{

int n = s.size();

for(int i=0;i<n;i++)
{
	int count = 0;
	for(int j=i;j<=(i+6) and (i+6)<n;j++)
	{
      if(s[j]==s[i]) count++;
	}

	if(count >= 7)
	{
	cout<<"YES";
	return;
	}
}

cout<<"NO";
return;


}

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	

	string s;
	cin>>s;

	// check dangerous or not 
	// for dangerous print "YẺS"
	// else "NO"
    solve(s);

 
	return 0;

}