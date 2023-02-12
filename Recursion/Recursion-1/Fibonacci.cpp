#include<bits/stdc++.h>
using namespace std;

#define ll long long int 


ll Fib(ll n)
{

   // 0 1 1 2 3 5 8 13 21 ....
   // Fib(n) = Fib(n-1) + Fib(n-2)
   if(n==0 or n==1)
   {
   	return n;
   }

   return Fib(n-1)+Fib(n-2);
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
			cout<<Fib(n)<<endl;
			t--;
		}
	


 
	return 0;

}