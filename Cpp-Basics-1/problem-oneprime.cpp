#include<iostream>
using namespace std;

void checkPrime(int num)
{
    bool flag = true; //number is prime
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag = false;
            break;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main()
{
    int x;
    cin>>x;
    checkPrime(x);
    return 0;
}