#include<bits/stdc++.h>
using namespace std;

int solve(int a, int b)
{
   


  int v1 = max(2*a,b);
  int v2 = max(a,2*b);
  int v3 = max(a+b,b);
  
  int ans = min(v1,min(v2,v3));
  return ans*ans;

}



int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
   int t;
   cin>>t;
   while(t>0)
   {
   	int a,b;
   cin>>a>>b;

   	cout<<solve(a,b)<<endl;
   	t--;
   }

 
	return 0;

}