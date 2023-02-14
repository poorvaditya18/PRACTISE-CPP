#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll MissingNum(ll n)
{
	
    ll sum_n = (n*(n+1))/2;
    
    vector<ll> Numbers(n);
    ll sum_r = 0;

    for(ll i=0;i<n;i++)
    {   
    	cin>>Numbers[i];
    	sum_r += Numbers[i];
    }


    ll res = abs(sum_n - sum_r);
    return res;
      
}



int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	

	ll n;
    cin>>n;

   cout<<MissingNum(n);
    
	return 0;

}