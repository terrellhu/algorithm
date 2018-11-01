#include <iostream>
#include <vector>

using namespace std;

template class<T>
void perm(T a[], int k, int n)
{
    if (k == n-1)
    {
        for (int i =0; i < n; ++i)
            cout << a[i];
        cout << endl;
    }
    while(!vecNumber.empty())
    {
        string number = vecNumber[0];
        cout << number << output(vecNumber);
        vecNumber.erase(vecNumber.begin());
        perm(vecNumber);
        
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
        a[i] = strtoul(argv[i], NULL, 0);
    }
    perm(a, 0, sizeof(a));
}