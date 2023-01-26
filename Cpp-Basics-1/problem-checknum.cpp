// problem to check - whether a num is even , odd , negative , positive
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main()
{
    int n;
    int even=0;
    int odd=0;
    int ne=0;
    int pos=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==0)
        {
            even++;
        }
        else if(v[i]>0)
        {
            pos++;
            if(v[i]%2==0)
            {even++;}
            else
            {odd++;}
        }
        else
        {
            ne++;
            int m = abs(v[i]);
            if(m%2==0)
            {even++;}
            else
            {odd++;}
        }
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<ne<<endl;

    return 0;
}