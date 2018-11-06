#include <iostream>

using namespace std;

uint64_t factorial(uint64_t n)
{
    if (2 > n)
    {
        return 1;
    }
    n =  n * factorial(n-1);
    return n;
}

int main(int argc, char** argv)
{
    if (argc < 2)
    {
        cerr << "proc n" << endl;
        return 0;
    }
    uint64_t n = strtoul(argv[1], NULL, 0);
    cout << "factorial=" << factorial(n) << endl;
    return 0;
}