//
// Created by terrellhu on 2019-03-05.
//

#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s)
{
    size_t len = s.size();
    if (len < 2)
        return true;

    // 去掉数字和字符以外的符号
    string s1 = "";
    while(len--)
    {
        char c = s[len];
        if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')) {
            s1 += c;
        }else if (c >= 'A' && c <= 'Z'){
                s1 += (c+32);
        }
    }
    cout << s1 << endl;

    len = s1.size();
    int i = len/2;
    int j = 0;

    while (len--)
    {
        if (s1[j++] == s1[len])
            continue;
        else
            return false;
    }
    return true;
}

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        cerr << "usage: proc string" << endl;
        return -1;
    }
    cout << argv[1] << endl;
    cout << isPalindrome(argv[1]) << endl;

    return 0;
}
