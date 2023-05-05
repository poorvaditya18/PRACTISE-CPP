#include<bits/stdc++.h>
using namespace std;
class FrontMiddleBackQueue {
public:
// using deque --> 
     deque<int> dq;
    FrontMiddleBackQueue()
    {
    }

    void pushFront(int val)
    {
        dq.push_front(val);
    }

    void pushMiddle(int val)
    {
        int m = dq.size() / 2;
        auto it = dq.begin();
        it = it + m;
        dq.insert(it, val);
    }

    void pushBack(int val)
    {
        dq.push_back(val);
    }

    int popFront()
    {
        if (dq.empty())
        {
            return -1;
        }
        int k = dq.front();
        dq.pop_front();
        return k;
    }

    int popMiddle()
    {
        if (dq.empty())
        {
            return -1;
        }
        int m = dq.size() / 2;
        if (dq.size() % 2 == 0)
        {
            m--;
        }
        auto it = dq.begin();
        it = it + m;
        int k = *it;
        dq.erase(it);
        return k;
    }

    int popBack()
    {
        if (dq.empty())
        {
            return -1;
        }
        int k = dq.back();
        dq.pop_back();
        return k;
    }
};
int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	
 
	return 0;

}