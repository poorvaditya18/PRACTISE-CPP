#include<bits/stdc++.h>
using namespace std;

// CIRCULAR QUEUE USING VECTOR 
class MyCircularQueue {

    int rear,front;
    int size;
    vector<int> arr;
public:
    MyCircularQueue(int k) {
        // size = k
        rear = front = -1;
        size =k; 
        arr.resize(k,-1);
    }
    
    bool enQueue(int value) 
    {
        // insertion will happen at the rear end 

        // check whether full or not 
        if(isFull()) return false;

        if(rear==-1 and front==-1)
        {
            // for the first element 
            rear=0;
            front=0;
        }
        else
        {
            //increase the rear
            rear = (rear+1)%size;
        }
        arr[rear]=value;
        return true;
    }
    
    bool deQueue() 
    {

    	// deletion will happen at the front 
        if(isEmpty()) return false;

        // if queue is not empty then 
        arr[front] = -1; 

        // increase the front 
        front = (front+1)%size;

        // if there is only 1 remaining element then front == rear+1
        if(front == (rear+1)%size)
        {
            front= -1;
            rear = -1;
        }
        
        return true;
        
    }
    
    int Front() {
        return isEmpty()?-1:arr[front];
    }
    
    int Rear() {
        return isEmpty()?-1:arr[rear];
    }
    
    bool isEmpty() {
        return (front ==-1 and rear==-1);
    }
    
    bool isFull() {
        return (front==(rear+1)%size);
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */

// Circular Array --> 
int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
	return 0;

}