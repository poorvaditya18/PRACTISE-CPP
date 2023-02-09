#include<bits/stdc++.h>
using namespace std;

#define ll long long int


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
  
  ll H, W;
  cin>>H>>W;
  ll A[H][W];
  for(ll i=0;i<H;i++)
  {
  	for(ll j=0;j<W;j++)
  	{
  		cin>>A[i][j];
  	}
  }

   // we want to find transpose of a matrix 
  // transpose of the matrix is interchanging rows and columns
   ll B[W][H];
   for(ll i=0;i<W;i++)
   {
   	for(ll j=0;j<H;j++)
   	{
   		cout<<A[j][i]<<" ";
   	}
   	cout<<endl;
   }


	return 0;

}