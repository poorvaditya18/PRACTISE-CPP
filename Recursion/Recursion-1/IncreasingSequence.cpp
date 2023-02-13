#include<bits/stdc++.h>
using namespace std;


// recursion --> F(N) = F(N-1) --> then print(N)
// F(5) ->>> F(4) ->>> F(3) ->> F(2) ->>F(1) ->>>> F(0) base case return; 
// 1 -> 2 -> 3 -> 4 -> 5
void PrinSeq(int n)
{
   
   if(n<1)
   {
   	 return;
   }
    PrinSeq(n-1);
    cout<<n<<" ";
}


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	


   // print increasing sequence from --> 1 to n using recursion  
   
   int n; cin>>n;

   // iteratively 
   for(int i=1;i<=n;i++)
   {
   	cout<<i<<" ";
   } 		
	
	cout<<endl;
	PrinSeq(n);

 
	return 0;

}