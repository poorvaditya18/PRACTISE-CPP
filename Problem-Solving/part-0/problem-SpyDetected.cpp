#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
   cin>>n;

    int v1[n];
    int v2[n];
    for(int i=0;i<n;i++)
    {
    	cin>>v1[i];
    	v2[i] = v1[i];
    }
   sort(v2,v2+n);

   for(int i=0;i<n;i++)
   {
   	if(v1[i]!=v2[1])
   	{
   		cout<<i+1<<"\n";
   	}
   }
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
     	solve();
     	t--;
     }
  

 

  
	return 0;

}