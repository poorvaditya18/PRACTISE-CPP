/*
J. Multiples
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".
*/
#include<iostream>
using namespace std;

void checkMultiple(int a,int b)
{
  if((a%b==0) or (b%a==0))
  {
    cout<<"Multiples"<<endl;
    return;
  }
  cout<<"No Multiples"<<endl;
}

int main()
{
    int a,b;
    cin>>a>>b;
    checkMultiple(a,b);
    return 0;
}