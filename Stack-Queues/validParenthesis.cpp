#include<bits/stdc++.h>
using namespace std;

 bool isValid(string s) 
{
       // valid parenthesis matching 

       stack<char> st;
       
       for(int i =0;i<s.length();i++)
       {
           // check for opening brackets -->
           if(s[i]=='(' or s[i]=='{' or s[i]=='[')
           {
                // push in the stack 
                st.push(s[i]);
           }

           // if closing bracket  - ) , ] , }
           else
           {    
           	   // check whether stack is empty or not if empty then return false . case -> ]()
               if(st.empty()) return false;

            	// stack is non empty 
                char c = st.top(); // take the top element 
                st.pop(); // remove it from the stack 
                if((s[i]==')' and c=='(') or (s[i]==']' and c=='[') or (s[i]=='}' and c=='{'))
                {
                	// if there is a match then continue 
                       continue;
                }
                else
                {
                	// not match -> return false;
                     return false;
                }
           }
       }
     // finally , if stack remains empty then true. parenthesis matched.  
     if(st.empty()) return true;
       
       return false;
 }


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
	return 0;

}