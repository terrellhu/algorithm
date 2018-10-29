#include <iostream>

using namespace std;

void reverse(uint64_t n)
{
    cout << n%10;
    if (0 != n/10)
    {
        reverse(n/10);
    }

    return;
}

int main(int argc, char** argv)
{
    if (argc < 2)
    {
        cerr << "proc number" << endl;
        return 0;
    }
    uint64_t n = strtoul(argv[1], NULL, 0);

    reverse(n);

    return 0;
}