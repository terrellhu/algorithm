#include <iostream>
#include <stdlib.h>

using namespace std;

int aplusb(int a, int b) {
    int ret = 0;
    int temp = 0;
    while (0 != b)
    {
        ret = a ^ b;
        temp = (a&b) << 1;
        a = ret;
        b = temp;
    }
    return ret;
}

int main(int argc, char** argv)
{
    if (3 != argc)
    {
        std::cerr << "usage: proc a b" << std::endl;
        return -1;
    }

    int a = strtol(argv[1], 0, 10);
    int b = strtol(argv[2], 0, 10);
    int ret = aplusb(a, b);
    std::cout << "ret=" << ret << std::endl;

    return 0;
}