#include<bits/stdc++.h>
using namespace std;

#define ll long long int 


int highestPowerOf2(int x)
{
	int res =1 ;
	while(res<=x)
	{
		res*=2;
	}
	res/=2;
	return res;
}


int solve()
{
	//Idea ->

	// take the highest power of 2 
	int x;
	cin>>x;

	int bact = 0;
	while(x!=0)
	{
		bact++;
		x = x - highestPowerOf2(x);
	}
    return bact;
}




int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
	cout<<solve()<<endl;


	return 0;

}