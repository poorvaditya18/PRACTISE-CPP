#include<bits/stdc++.h>
using namespace std;
#define ll long long int


void solve()
{
		ll n;
		cin>>n;
		vector<ll> ans(n);

		if((n/2)%2!=0)
		{
			cout<<"NO"<<'\n';

		}
		else
		{
			cout<<"YES"<<'\n';
			for(int i=1;i<=(n/2);i++)
			{
				cout<<i*2<<' ';
			}
			for(int i=1;i<(n/2);i++)
			{
				cout<<i*2 - 1<<" ";
			}
			//last element
			// (2*(n/2)-1) + (n/2) = 3(n/2) - 1 
			cout<<3*(n/2)-1<<"\n";
		}
}



int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
	// Idea
    // Given : n will be even 
    
    // if (n/2) is odd then there doesnot exist array whose sum of even = sum of odd
	// suppose n = 6 then n/2 = 3
	// even -> 2,4,6
	// odd -> 1,3,5 
	// their sum is not equal 

	// suppose n = 10 then n/2 = 5
	// even -> 2,4,6,8,10 --> sum = 30
	// odd -. 1,3,5,7, 5  --> sum = 30 
    // but we require only distinct numbers so such array doesnt exist


     // n= 8 then n/2 ==> 4
     // even --> 2,4,6,8 ==> sum = 20
     // odd ->   1,3,5,7+(n/2) ==> last element = sum even - sum odd i.e 20-9 = 11	
     //						==> or (last even-1)+n/2 = 11

	int t;
	cin>>t;
	while(t>0)
	{
		solve();
		t--;
	}

 
	return 0;

}