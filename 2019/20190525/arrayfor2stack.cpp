//
// Created by terrellhu on 2019-06-03.
//

#include <iostream>

using namespace std;

template <class T>
class CTwoStack{
public:
    CTwoStack(){len = 100; new T[len]; stack1Top = -1; stack2Top = len;}
    ~CTwoStack(){delete [] arr;}
    void push1(const T& data){
        assert(stack1Top+1 != stack2Top);
        arr[stack1Top] = data;
        ++stack1Top;
    }
    void pop1(){
        assert(stack1Top > -1);
        stack1Top--;
    }
    T& top1(){
        assert(stack1Top > -1);
        return arr[stack1Top];
    }

    void push2(const T& data){
        assert(stack2Top-1 != stack1Top);
        arr[stack2Top] = data;
        --stack2Top;
    }
    void pop2(){
        assert(stack2Top < len+1);
        stack2Top++;
    }
    T& top2(){
        assert(stack2Top < len+1);
        return arr[stack2Top];
    };

private:
    T* arr;
    int len;

    int stack1Top;
    int stack2Top;
};

int main()
{
    cout << "11111" << endl;
    CTwoStack<int> stack;
    stack.push1(1);
    stack.push2(2);

    cout << stack.top1() << "\t" << stack.top2() << endl;

    return 0;
}