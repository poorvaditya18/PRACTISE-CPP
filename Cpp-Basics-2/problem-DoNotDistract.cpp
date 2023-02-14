#include<bits/stdc++.h>
using namespace std;

#define ll long long int 

void isDistract()
{
    // idea -> is to check the first occurence and last occurence of the char
    // if betw them if any other character is present then --> suspicious
    
    int n;   // no of days 
    cin>>n;
    string s;  // given strings
  	cin>>s;
    for(char i='A';i<='Z';i++)
    {
         int first_occur = INT_MAX;
         int last_occur = INT_MIN;
         for(int j=0;j<n;j++)
         {
            if(s[j]==i)
            {
            	first_occur = min(first_occur,j);
            	last_occur = max(last_occur,j);
            }
         }

         for(int j = first_occur;j<=last_occur;j++)
         {
         	if(s[j]!=i)
         	{
         		cout<<"No"<<endl;
         		return;
         	}
         }
    }
    cout<<"Yes"<<endl;
    return;
   
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
  	isDistract();
  	t--;
  }
    


	return 0;

}