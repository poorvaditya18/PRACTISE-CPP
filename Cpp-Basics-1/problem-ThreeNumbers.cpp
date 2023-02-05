#include<bits/stdc++.h>
using namespace std;

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
    
   // input
   int k,s;
   cin>>k>>s;
    
   // condition : (0<= x,y,z<= k) and x+y+z = s
 
   int count =0;
   	 for(int x=0;x<=k;x++)
   	 {
   	 	for(int y=0;y<=k;y++)
   	 	{
   	 		int z = s -(x+y);
   	 		if(z>=0 and z<=s and z<=k)
   	 		{
   	 			count++;
   	 		}
   	 	}
   	 }
   
   cout<<count<<endl;
   
	return 0;

}