#include <iostream>
#include <stack>

using namespace std;

class CTower{
public:
    string name;
    stack<int> content;
};


void hanoi(int n, CTower& x, CTower& y, CTower& z)
{
    if (n)
    {
        hanoi(n-1, x, z, y);
        y.content.push(x.content.top());
        x.content.pop();
        cout << "move " << x.name <<"." << n << " to " << y.name << endl;
        hanoi(n-1,z,y,x);
    }
    return;
}

int main()
{
    CTower X, Y, Z;
    X.name = "X";
    Y.name = "Y";
    Z.name = "Z";
    X.content.push(5);
    X.content.push(42);
    X.content.push(3);
    X.content.push(2);
    X.content.push(1);

    hanoi(X.content.size(), X, Y, Z);
    while (!Y.content.empty())
    {
        cout << "[" << Y.content.top() << "]";
        Y.content.pop();
    }
    cout << endl;

    return 0;
}