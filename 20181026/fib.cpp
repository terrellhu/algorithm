#include <iostream>
#include <map>

using namespace std;

map<uint64_t, uint64_t> g_mapFib;

uint64_t Fib(uint64_t n)
{
    if (n<=1) return n;
    return Fib(n-1)+Fib(n-2);
}

//用MAP来存已经计算过的值，不再重复计算
uint64_t Fibex(uint64_t n)
{
    if (n<=1){
        return n;
    }
    uint64_t t = g_mapFib[n];
    if (0 == t){
        t = Fibex(n-2) + Fibex(n-1);
        g_mapFib[n] = t;
    }
    
    return t;
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