// 非欧几里得算法，计算公约数，即连续整数检测法
#include <iostream>

using namespace std;

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
    // 公约数必然小于m&n
    int t = (m>n?n:m);
    // 找到能同时整除于m&n的最大值即可
    while (m%t || n%t)
    {
        --t;
    }
    return t;
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