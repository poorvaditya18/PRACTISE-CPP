#include<bits/stdc++.h>
using namespace std;

#define ll long long int 


void checkFairPlay(vector<ll> &skills)
{
	vector<ll> dummy ;
	dummy = skills;

	sort(dummy.begin(),dummy.end());
     
    ll max = dummy[3];
    ll second_max = dummy[2];
    ll sum = max + second_max;

   ll first_player,second_player;

   if(skills[0]>skills[1])
   {
       first_player = skills[0];
   }
   else
   {
   	  first_player = skills[1];
   }

   
   if(skills[2]>skills[3])
   {
   	second_player = skills[2];
   }
   else
   {
   	second_player = skills[3];
   }
   
   ll res = first_player + second_player;
   if(res == sum)
   {
   	cout<<"YES"<<endl;
   	return ;
   }
   
   cout<<"NO"<<endl;
   return;

}


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	

     ll t;
     cin>>t;

     while(t>0)
     {
     	vector<ll> skills(4);
     	for(auto &i:skills)
     	{
     		cin>>i;
     	}
        checkFairPlay(skills);
     	t--;
     }
 
	return 0;

}