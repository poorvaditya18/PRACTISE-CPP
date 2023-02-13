#include<bits/stdc++.h>
using namespace std;

int AlternateSum(int n)
{


  if(n==0)
  {
  	return 0;
  }

 return AlternateSum(n-1) + (n%2==0?(-n):n); 

}



int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
  

  // Find sum of 'n' natural number with alternate sign -->
  // example ->  1 - 2 + 3 -4 + 5 ....

 // odd + 
 // even - 
 
 // Recurrence Relation :-> 
		// F(N) = F(N-1) + (n%2==0?(-n):n)

int n; cin>>n;
cout<<AlternateSum(n);


	return 0;

}