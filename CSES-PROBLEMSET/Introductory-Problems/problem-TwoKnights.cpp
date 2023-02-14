#include<bits/stdc++.h>
using namespace std;

#define ll long long int 

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	


	// Mathematics ->

	ll n;
	cin>>n;
   
    // for n=1 --> 0 possible combination 
    // for n=2 --> 6 possible combination 

    // total available --> N x N = N^2 let x = N^2
    // from x choose 2 to place knights --> xC2 ways ( all ways (valid + invalid)) 

    // we need to find invalid no of cases 
    // So valid no of ways = Total - invalid

    // for  3 X 2 --> 2 invalid cases
    // for  2 x 3 --> 2 invalid cases 
     
    // generalizing this -> 
    // for n x n --> (n-1)(n-2) + (n-2)(n-1) = 2(n-1)(n-2) invalid cases 
    // for each invalid case --> 2 invalid config 
    // so total invalid cases = 2(2(n-1)(n-2))

    for(ll i=1;i<=n;i++)
    {
    	ll totalPossible = ((i*i)*((i*i)-1))/2; // n C 2 ways 
    	ll attackPosition = 4*(i-1)*(i-2);
    	cout<<totalPossible - attackPosition<<endl;

    }



 
	return 0;

}