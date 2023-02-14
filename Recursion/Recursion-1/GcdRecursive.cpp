#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	if(b>a) return gcd(b,a);
	if(a==0) return b;
	if(b==0) return a;
    return gcd(b,a%b);
}

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
// Find GCD of x and y ->
// Euclid algorithm --> gcd(a,b) = gcd(b%a,b) if a>b 
// Base case --> if(a==0) then b , if (b==0) then a

	int a,b;
	cin>>a>>b;		
  
     cout<<gcd(a,b)<<endl;
	return 0;

}