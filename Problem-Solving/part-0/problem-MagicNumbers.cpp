#include<bits/stdc++.h>
using namespace std;

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	

	string s;
	cin>>s;

	if(s[0]=='4')
	{
		cout<<"NO"<<endl;
	}
	else if (s.size()>=2 and s[0]=='4' and s[1]=='4')
	{
		cout<<"NO"<<endl;
	}
	else
	{
		int n = s.size();
		int count = 0;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='4') count++;
			else count =0;

			if(count>=3)
			{
				cout<<"NO"<<endl;
				return 0;
			}
			if(s[i]!='4' and s[i]!='1')
			{
				cout<<"NO"<<endl;
				return 0;
			}
		}
		cout<<"YES"<<endl;
	}
 
	return 0;

}