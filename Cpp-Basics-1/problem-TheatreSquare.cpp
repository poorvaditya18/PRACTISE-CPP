#include<bits/stdc++.h>
using namespace std;


#define ll long long int 


// REMEMBER -->
// Trick : check for no. of blocks in length and width resp.
// ceil(a/b)---> formula when a an b are large --> (a+b-1)/b

ll solveSquare(ll n,ll m, ll a)
{
   
    // calculate ceil(n/a) --> (n+a-1)/2
    // caclculate ceil(m/a) ---> (m+a-1)/2

    ll width =  (n+a-1)/a;
    ll length = (m+a-1)/a;

     return width*length;

}



int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 ll n,m,a;
 cin>>n>>m>>a;

 cout<<solveSquare(n,m,a)<<endl;

	return 0;

}