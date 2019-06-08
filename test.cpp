//
// Created by 胡涛 on 2019-03-15.
//

#include <iostream>

using namespace std;

int main(){
    int i = 0;
    int a =1;
    int b =2;
    i += a != b ? 4 : 0;
    cout << i << endl;

    return 0;
}