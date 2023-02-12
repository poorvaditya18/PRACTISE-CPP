#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	 int mishika_cnt = 0;
	 int chris_cnt = 0;

	 while(n>0)
	 {
	 	int m,c;
		 cin>>m>>c;
		 if(m>c)
		 {
		 	mishika_cnt++;
		 }
		 else if(c>m)
		 {
		 	chris_cnt++;
		 }
	 	n--;
	 }

	 if(mishika_cnt==chris_cnt)
	 {
	 	cout<<"Friendship is magic!^^"<<endl;
	 	return;
	 }
	 else if(mishika_cnt > chris_cnt)
	 {
	 	cout<<"Mishka"<<endl;
	 	return;
	 }
	 
	 cout<<"Chris"<<endl;
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