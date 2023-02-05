#include<bits/stdc++.h>
using namespace std;

#define ll long long int 

ll sumSolve(ll  a,ll  b)
{
	ll sum = (b*(b+1)/2) - (a*(a+1)/2) + a ;
	return sum;
}


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
   ll  t;
   cin>>t;
   while(t>0)
   {
   	ll l,r;
   	cin>>l>>r;
   	if(l>r){swap(l,r);}
    cout<<sumSolve(l,r)<<endl;
    t--;
   }


	return 0;

}