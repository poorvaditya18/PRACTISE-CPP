#include<bits/stdc++.h>
using namespace std;

#define ll long long int 

ll SumRecursive(ll n)
{

   // Recurrence Relation
   // F(n) = F(n/10) + n%10

	if(n>=0 and n <=9)
	{
		return n;
	}

    return  SumRecursive(n/10) + (n%10);

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
       cout<<SumRecursive(n)<<endl;
      t--;
    }


	return 0;
	

}