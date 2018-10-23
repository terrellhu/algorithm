// 欧几里得迭代实现
#include <iostream>

using namespace std;

void swap(int& a, int& b)
{
    int c = a;
    a = b;
    b = c;
}

int gcd(int m, int n)
{
    if (0 == m)
    {
        return n;
    }
    if (0 == n)
    {
        return m;
    }
    if (m > n)
    {
        swap(m,n);
    }
    while (m > 0)
    {
        int t = m;
        m = n%m;
        n = t;
    }
    return n;
}

int main(int argc, char** argv)
{
    if (argc < 3)
    {
        cerr << "proc m n" << endl;
        return 0;
    }
    int m = strtol(argv[1], NULL, 0);
    int n = strtol(argv[2], NULL, 0);

    cout << "gcd=" << gcd(m,n) << endl;
    return 0;
}