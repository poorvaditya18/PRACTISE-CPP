#include<bits/stdc++.h>
using namespace std;


void solve()
{

   map<int,int> mp; // {{1,1},{2,1},{12,2}}
   
   vector<int> ans(5); // 12 12 11 1 2
   for(int i=0;i<5;i++)
   {
   	 cin>>ans[i];
   	 mp[ans[i]]++;
   }
   
   int check = 0;
   for(auto it:mp)
   {
   	if(it.second==2 or it.second==3)
   	{
   		check += it.second;
   	}
   }
   if(check == 5)
   {
   	cout<<"Yes"<<endl;
   	return;
   }
   cout<<"No"<<endl;
   return;
   
}

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
    solve();


	return 0;

}