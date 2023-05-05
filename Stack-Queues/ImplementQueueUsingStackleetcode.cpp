#include<bits/stdc++.h>
using namespace std;
class MyQueue {
public:
    stack<int> input, output;
    MyQueue() {        
    }
    
    // push the element 
    void push(int x) {
        // whenever push operation is performed , we will insert it in the input stack 
        input.push(x);
    }
    
    // remove the element 
    int pop() {
        // whenever pop operation is performed check for the output stack
        if(!output.empty())
        {
            int x = output.top();
            output.pop();
            return x;
        }
        else
        {
            // first copy from input to output 
            while(!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
            int x = output.top();
            output.pop();
            return x;
        }
    }
    
    // top 
    int peek() {
        //check the output stack 
        if(!output.empty())
        {
            return output.top();
        }
        else
        {
            // copy from input to output 
            while(!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
            return output.top();
        }
    }
    
    // empty
    bool empty() {
       return (input.empty() and output.empty());
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
	return 0;

}