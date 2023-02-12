#include<bits/stdc++.h>
using namespace std;
#define ll long long int


// 1 2 3 4 5 

void PrintNaturalNo(ll n)
{
    if(n>1)
    {
    	PrintNaturalNo(n-1);
    }
   cout<<n<<" ";
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
		ll n;
		cin>>n;
		
		PrintNaturalNo(n);
        cout<<'\n';
		t--;
	}
 
	return 0;

}