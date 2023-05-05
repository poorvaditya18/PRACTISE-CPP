#include<bits/stdc++.h>
using namespace std;

class MyStack {
public:
    // stack using two queues
    queue<int> q1,q2;
    MyStack() {
        
    }
    
    void push(int x) {
        // 1. whenever new elements come push in the q2.
        q2.push(x);
        // 2. if there are elements in q1, add them in q2 (element by element)
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        // 3. swap q1 , q1
        swap(q1,q2);
    }
    
    int pop() {
        int x = q1.front();
        q1.pop();
        return x;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return (q1.empty() and q2.empty());
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
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