#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve()
{

     ll n; 
     cin>>n;

     for(ll k= 2;k<=30;k++)
     {
     	
     	ll y = (1ll<<k) -1 ;
     	if(n%y==0)
     	{
     		// we need to print only one value
     		cout<<n/y<<endl;
     		return ;
     	}
     }

}


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	

	// solution -->
	/*
       constraint: n <= 1e9
       y = 1 + 2 + 4 ..... + 2^k-1
       x.y = n
       x = n/y
       given x>0
       (n%y==0) then only x will exists
       n --> will not change 
       only y will change , y depens on k >1 k --> [2, infi]

       x>0 --->> only when n 1e9 and y<1e9
           ---->> when y > 1e9 then (n%y==0) will never hold true.
           -->>> so when k > 30 we will never get answer
           -->> check k values [2,30]

        k = 2 ,y = 3
        k = 3 , y = 7
        k = 4 , y = 15 
        ...
        relation between y and k => y = (2^k)-1   

	*/
		int t;
		cin>>t;
		while(t>0)
		{
			solve();
			t--;
		}


	return 0;

}