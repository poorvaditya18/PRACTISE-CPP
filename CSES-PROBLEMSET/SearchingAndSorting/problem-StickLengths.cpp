#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 // find the best target value ... it will be closer to the cental (thats why find median)


ll n,target;
cin>>n;

vector<ll> sticks(n);

for(ll i=0;i<n;i++)
{
	cin>>sticks[i];
}

sort(sticks.begin(),sticks.end());

if(n%2==0)
{
	//n even 
	ll num = (n/2)+((n/2)+1);
	target = num/2;
}
else
{
	target = ((n/2)+1);
}

// cout<<target<<endl;

ll minCost = 0;

for(ll i=0;i<n;i++)
{

	minCost += abs(sticks[target-1] - sticks[i]);
}

cout<<minCost<<endl;

	return 0;

}