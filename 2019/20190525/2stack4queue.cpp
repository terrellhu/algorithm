//
// Created by terrellhu on 2019-05-25.
//

#include <iostream>
#include <stack>
#include <assert.h>

using namespace std;

template <class T>
class CQueue{
public:
    void Push(const T& data){
        InStack.push(data);
    }
    void Pop(){
        assert(InStack.empty() || OutStack.empty());
        if (OutStack.empty()){
            while (!InStack.empty()) {
                OutStack.push(InStack.top());
                InStack.pop();
            }
        }
        OutStack.pop();
    }

    T& Front(){
        assert(InStack.empty() || OutStack.empty());
        if (OutStack.empty()){
            while (!InStack.empty()){
                OutStack.push(InStack.top());
                InStack.pop();
            }
        }
        return OutStack.top();
    }
    T& Back(){
        assert(InStack.empty() || OutStack.empty());
        if (InStack.empty()) {
            while (!OutStack.empty()) {
                InStack.push(OutStack.top());
                OutStack.pop();
            }
        }
        return InStack.top();
    }

    bool Empty(){
        return InStack.empty() || OutStack.empty();
    }

private:
    stack<T> InStack;
    stack<T> OutStack;
};

int main()
{
    CQueue<int> queue;
    queue.Push(1);
    queue.Push(2);

    cout << queue.Front() << endl;
    queue.Pop();
    cout << queue.Front() << endl;
    cout << queue.Back() << endl;
    queue.Push(3);
    queue.Push(4);
    cout << queue.Front() << endl;
    cout << queue.Back() << endl;

    cout << queue.Empty() << endl;
}