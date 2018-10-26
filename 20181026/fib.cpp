#include <iostream>

using namespace std;

uint64_t Fib(uint64_t n)
{
    if (n<=1) return n;
    return Fib(n-1)+Fib(n-2);
}

int main(int argc, char** argv)
{
    if (argc < 2)
    {
        cerr << "proc n" << endl;
    }
    uint64_t n = strtoul(argv[1], NULL, 0);
    cout << "fib=" << Fib(n) << endl;
    return 0;
}