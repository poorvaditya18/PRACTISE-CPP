#include<bits/stdc++.h>
using namespace std;
#define ll long long int 


void printSeq(ll n)
{
	//base case -> 
	if(n==0 or n==1)
	{ 
		cout<<n<<" ";
		return;
	}

	cout<<n<<" ";
	if(n%2!=0)
	{
		n = 3*n+1;
		printSeq(n);
	}
	else
	{
		n = n/2;
		printSeq(n);
	}
   
}


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
	// n -> even ... (n/2)
	// n -> odd ... (3*n+1)
	
	ll n;
	cin>>n;
	printSeq(n);

    // for n=3
    // 3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2-> 1

	return 0;

}