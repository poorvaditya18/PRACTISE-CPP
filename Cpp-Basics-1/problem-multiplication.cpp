#include<iostream>
using namespace std;
void MultiplicationTable(int  n)
{
   for(int  i=1;i<=12;i++)
   {
    cout<<n<<" * "<<i<<" = "<<n*i<<endl;
   }
   return ;
}
int main()
{
    int n;
    cin>>n;
    MultiplicationTable(n);
    return 0;
}