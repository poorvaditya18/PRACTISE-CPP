#include<bits/stdc++.h>
using namespace std;

// remove all the occurences of 'a' in string s="abcax"


string F(string &str,char ch,int idx,int n)
{
	//base case
    if(idx==n)
    {
       return "";	
    }
     
    string curr = "";
    curr += str[idx];

    return ( (str[idx]==ch) ? "" : curr) + F(str,ch,idx+1,n);
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
		string s;
		cin>>s;
		char ch;
		cin>>ch; // you want to remove from string 
		int n = s.length();
		cout<<F(s,ch,0,n)<<endl;
		t--;
	}
 
	return 0;

}