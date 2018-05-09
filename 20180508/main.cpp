#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv)
{
    if (2 != argc)
    {
        cerr << "usage: number" << endl;
        return 0;
    }
    int num = strtoull(argv[1], 0, 10);

    int win = 0;
    int lose = 0;
    srandom(time(NULL));
    for (int i = 0; i < num; ++i)
    {
        int temp = random()%6;
        if ( temp< 3)
        {
            ++win;
        }
        if (temp > 2 && temp < 5)
        {
            ++lose;
        }
        while (5 == temp)
        {
            temp = random()%6;
            if ( temp< 3)
            {
                ++win;
            }
            if (temp > 2 && temp < 5)
            {
                ++lose;
            }
        }
    }
    cout << "cnt=" << num << ";win=" << win << ";lose=" << lose << endl;
    return 0; 
}