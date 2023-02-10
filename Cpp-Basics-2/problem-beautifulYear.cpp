#include<bits/stdc++.h>
using namespace std;

#define ll long long int 


// checks for the distinct digits for the year
bool goodYear(ll yr)
{
	vector<ll> count(10,0); // Frequency count -> this will store the count of digits in the year

	while(yr>0)
	{
		count[yr%10]++;
		if(count[yr%10]>1) return false;
        yr = yr/10;
	}
    return true;
}

void solve()
{
	ll yr;
	cin>>yr;
	yr++;
	while(!goodYear(yr))
	{
		yr++;
	}
	cout<<yr<<'\n';

}


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
  
   // approach -> make function to find unique digits then it will be good year 

   // check -> if not then then check for the next value 
    solve();

	return 0;

}