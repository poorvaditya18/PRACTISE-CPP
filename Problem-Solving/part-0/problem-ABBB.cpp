#include<bits/stdc++.h>
using namespace std;


void solve()
{
	 stack<char> st;

   string s;
   cin>>s;
   int n = s.length();
   for(int i=0;i<n;i++)
   {

     if(s[i]=='A')
     {
     	st.push(s[i]);
     }
     else if(s[i]=='B')
     { if(!st.empty())
 		{
 			char currTop = st.top();
	     	if((currTop == 'A') or (currTop =='B'))
	     	{
	     		st.pop();
	     	}
 		}
     	else 
     	{
          st.push(s[i]);
     	}

     }
    
   }
     int count = 0;
     while(!st.empty())
     {
         st.pop();
         count++;
     }
     cout<<count<<endl;
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