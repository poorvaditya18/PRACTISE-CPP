#include<iostream>
#define ll long long int 
using namespace std;

ll lastDigit(ll num)
{
  return num%10;
}

int main()
{
    ll a,b;
    ll sum=0;
    cin>>a>>b;
    sum = lastDigit(a) +lastDigit(b);
    cout<<sum<<endl;
    
    return 0;
}