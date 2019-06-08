//
// Created by terrellhu on 2019-06-01.
//

#include <iostream>
#include <stack>

using namespace std;

template <class T>
class CStack{
public:
    void Push(const T& data){
        curStack.push(data);
        if (minStack.empty() || data <= minStack.top()){
            minStack.push(data);
        }
    }
    void Pop(){
        assert(!minStack.empty() && !curStack.empty());
        if (curStack.top() <= minStack.top()){
            curStack.pop();
            minStack.pop();
        }else{
            curStack.pop();
        }
    }
    T& Min(){
        assert(!minStack.empty());
        return minStack.top();
    }
private:
    stack<T> minStack;
    stack<T> curStack;
};

int main()
{
    CStack<int> stack;
    stack.Push(5);
    stack.Push(3);
    stack.Push(7);
    cout << stack.Min() << endl;
}
