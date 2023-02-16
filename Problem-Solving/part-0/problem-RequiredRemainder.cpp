#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{

	 ll x,y,n;
   
  ll k;

  cin>>x>>y>>n;
 
   k = (n-(n%x))+y;
  
  // to avoid to become k>n
   if(k>n)
   {
   	k-=x;
   }
   
   cout<<k<<endl;
}

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
   ll t;
    cin>>t;
    while(t>0)
    {
    	solve();
    	t--;

    }

	return 0;

}