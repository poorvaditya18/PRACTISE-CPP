#include<bits/stdc++.h>
using namespace std;

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	

	// constraints --> 1 <=  n,m <= 1000
    // o(n2) ==> 1e6 <= 1e7 so solution will be accepted .

 int count= 0;	
 int n,m;
 cin>>n>>m;


// Time --> O(n2)
 for(int i=0;i<=n;i++)
 {
     for(int j=0;j<=m;j++)
     {
     	if(((i*i)+j==n) and (i+(j*j)==m))
     	{
     		count++;
     	}
     }
 }

cout<<count<<endl;

	return 0;

}