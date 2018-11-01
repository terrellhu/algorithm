#include <iostream>

using namespace std;

template < class T >
void perm(T a[], int k, int n)
{
    if (k == n-1)
    {
        for (int i =0; i < n; ++i)
            cout << a[i];
        cout << endl;
    }
    for (int i = k; i < n; ++i)
    {
        T t = a[i];a[i] = a[k];a[k] = t;
        perm(a, k+1, n);
        a[k] = a[i];a[i] = t;
    }
    return;
}

int main(int argc, char** argv)
{
    if (argc < 4)
    {
        cerr << "proc number1 number2 number3..." << endl;
        return 0;
    }

    uint64_t a[argc-1] = {0};
    for (int i = 1; i < argc; ++i)
    {
        a[i-1] = strtoul(argv[i], NULL, 0);
    }
    perm(a, 0, argc-1);
}