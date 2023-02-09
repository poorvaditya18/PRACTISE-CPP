#include<bits/stdc++.h>
using namespace std;

#define ll long long int


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
    ll arr[5][5] ; 
    ll center_x=2;
    ll center_y =2;
    ll x1,y1;
    for(int i=0;i<5;i++)
    {
    	for(int j=0;j<5;j++)
    	{
    		cin>>arr[i][j];
    		if(arr[i][j]==1)
    		{
                x1=i;
                y1=j;
    		}
    	}
    }


    ll x = llabs(x1-center_x);
    ll y = llabs(y1-center_y);
    ll ans = x+y;
    cout<<ans<<endl;


	return 0;

}