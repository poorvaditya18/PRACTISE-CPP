#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
	ll n;
   cin>>n;

   vector<ll> a(n);
   vector<ll> b(n);
   for(auto &i:a)
   {
      cin>>i;
   }
   for(auto &i:b)
   {
      cin>>i;
   }
   
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    for(int i=0;i<n;i++)
    {
    	if(a[i]!=b[i])
    	{
    		cout<<"no"<<'\n';
    		return;
    	}
    }
    cout<<"yes"<<'\n';
    return;

}



int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
	solve();
 
   

	return 0;

}