//
// Created by terrellhu on 2019-05-28.
//

#include <iostream>
#include <queue>
#include <assert.h>

using namespace std;

template <class T>
class CStack{
public:
    void Push(const T& data){
        if (!QueueB.empty()){
            QueueB.push(data);
        }else{
            QueueA.push(data);
        }
    }
    void Pop()
    {
        assert(!QueueA.empty() || !QueueB.empty());
        queue<T>* q1 = nullptr;
        queue<T>* q2 = nullptr;
        if (!QueueA.empty()){
            q1 = &QueueA;
            q2 = &QueueB;
        }else{
            q1 = &QueueB;
            q2 = &QueueA;
        }
        size_t len = q1->size();
        while(len > 1){
            q2->push(q1->front());
            q1->pop();
            --len;
        }
        q1->pop();
    }
    T& Top(){
        assert(!QueueA.empty() || !QueueB.empty());
        queue<T>* q1 = nullptr;
        queue<T>* q2 = nullptr;
        if (!QueueA.empty()){
            q1 = &QueueA;
            q2 = &QueueB;
        }else{
            q1 = &QueueB;
            q2 = &QueueA;
        }

        return q1->back();
    }
private:
    queue<T> QueueA;
    queue<T> QueueB;
};

int main()
{
    CStack<int> stack;
    stack.Push(1);
    stack.Push(2);
    stack.Push(3);
    cout << stack.Top() << endl;
    stack.Pop();
    cout << stack.Top() << endl;
    stack.Pop();
    cout << stack.Top() << endl;
    return 0;
}