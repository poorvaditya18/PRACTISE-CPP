#include<bits/stdc++.h>
using namespace std;

void PrintMultiples(int n,int k)
{

   if(k<1)
   {
   	return;
   }
   PrintMultiples(n,k-1);
   cout<<n*k<<" ";

}


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
 // Given : a number num and a value k . Print k multiples of a num.
		int n;
		int k;
		cin>>n>>k;

// num = 12  k= 5   12 24 36 48 60 
         PrintMultiples(n,k);



	return 0;

}