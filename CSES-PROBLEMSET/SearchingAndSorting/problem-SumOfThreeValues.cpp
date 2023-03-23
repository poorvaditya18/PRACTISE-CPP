#include<bits/stdc++.h>
using namespace std;

void Solve(vector<int> &a,vector<pair<int,int>> &d , int n,int x)
{

	for(int i=0;i<n;i++)
	{
		int j = 0; 
		int k = n-1;
		while(j<k)
		{
			// check for same element index 
			if(d[j].second==i+1) j++;
			else if (d[k].second==i+1) k--;
			else if(d[j].first + d[k].first + a[i]>x) k--;
			else if (d[j].first + d[k].first + a[i]<x) j++;
			else 
			{
				cout<<d[j].second<<" "<<d[k].second<<" "<<i+1<<endl;
				return ;
			}
		}
	}
	cout<<"IMPOSSIBLE"<<endl;
}

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
	int n,x;
	cin>>n>>x;
	vector<int> a(n);
	vector<pair<int,int>> d(n); // will store element and its index 

	// taking input -->
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		a[i] = num;
		d[i]={num,i+1};
	}

	// sort 
	sort(d.begin(),d.end());

	Solve(a,d,n,x);
 
	return 0;

}