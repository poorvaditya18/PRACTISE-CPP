#include<bits/stdc++.h>

using namespace std;


int StringCompare(string s1, string s2)
{

	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

  for(int i=0;i<s1.length();i++)
    {
    	if(s1[i]!=s2[i])
    	{
    		if(s1[i]<s2[i])
    		{
    			return -1;
    		}
    		else if(s1[i]>s2[i])
    		{
    			return 1;
    		}
    	}
    }
return 0;
}




int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	

    string s1,s2;
    cin>>s1>>s2;

    cout<<StringCompare(s1,s2)<<endl;
  

 
	return 0;

}