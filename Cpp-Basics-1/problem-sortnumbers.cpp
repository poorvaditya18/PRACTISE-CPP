#include<iostream>
#include<vector>
#define ll long long int
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int min,mid,max;
    if(a<b)
    {
        if(a<c)
        {
            min=a;
            if(b>c)
            {
                max=b;
                mid=c;
            }
            else{
                max=c;
                mid=b;
            }
        }
        else
        {
        min = c;
        mid = a;
        max=b;
        }
    }
    else
    {
        if(a>c)
        {
            max=a;
            if(b>c)
            {
                min = c;
                mid = b;
            }
            else
            {
                min = b;
                mid = c;
            }
        }
        else
        {
            min = b;
            mid = a;
            max=c;

        }
    }
    cout<<min<<endl;
    cout<<mid<<endl;
    cout<<max<<endl;

    cout<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

    return 0;
}