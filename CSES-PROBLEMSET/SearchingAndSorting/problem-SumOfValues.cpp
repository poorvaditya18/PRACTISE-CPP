#include<bits/stdc++.h>
using namespace std;

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	


    bool flag = false;
	int n,target;
	cin>>n>>target;

	vector<int> arr(n);
	map<int,int> mpp;

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

    
    for(int i=0;i<n;i++)
    {
    	
    	int ele = target - arr[i];
    	if(mpp.find(ele)!= mpp.end())
    	{
           int eleIdx = mpp[ele];
           cout<<i+1<<" "<<eleIdx+1<<endl;
           flag= true;
           break;
    	}
    	// appending element with its indexes
    	mpp[arr[i]]=i;
    }
    if(!flag)
    {
    	cout<<"IMPOSSIBLE"<<endl;
    }
    

return 0; 
}