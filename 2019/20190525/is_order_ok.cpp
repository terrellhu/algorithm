//
// Created by terrellhu on 2019-06-01.
// 判断出栈顺序是否合法
//

#include <iostream>
#include <stack>
#include <vector>
#include <boost/algorithm/string.hpp>

using namespace std;
using namespace boost;

int main(){
    stack<string> helperStack;

    cout << "请输入入栈顺序（以,分隔）：";
    char inArr[20] = {0};
    cin.getline(inArr, 20);
    vector<string> inOrder;
    split(inOrder, inArr, is_any_of(","));
    char outArr[20] = {0};
    cout << "请输入出栈顺序（以,分隔）：";
    cin.getline(outArr, 20);
    vector<string> outOrder;
    split(outOrder, outArr, is_any_of(","));

    size_t len = 0;
    size_t cnt = 0;
    while(len < inOrder.size()){
        helperStack.push(inOrder[len]);
        while (!helperStack.empty() && helperStack.top() == outOrder[cnt]){
            cnt += 1;
            helperStack.pop();
        }
        len += 1;
    }

    if (helperStack.empty())
        cout << "order ok" << endl;
    else
        cout << "order error!" << endl;
    return 0;
}
