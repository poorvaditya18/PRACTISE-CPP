#include<bits/stdc++.h>
using namespace std;

#define ll long long int 

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	

    string n1,n2;
    cin>>n1>>n2;
    string ans="";
   
for(int i=0;i<n1.size();i++)
{
	if(n1[i]!=n2[i]) ans += "1";
	else ans += "0";
}

cout<<ans<<endl;
 
	return 0;

}