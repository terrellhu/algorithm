#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

//据说有返回值的线程函数，其返回值会被忽略
void func(int a, int b, int c)
{
    std::this_thread::sleep_for(std::chrono::seconds(3));
    cout << a << "--" << b << "--" << c << endl;
}

int main()
{
    std::thread t1(func, 1, 2, 3);
    cout << "ID=" << t1.get_id() << std::endl;
    //t1.join();
    
    //后台执行t2线程，程序退出也不会异常
    std::thread t2(func, 2, 3, 4);
    cout << "ID=" << t2.get_id() << std::endl;
    //t2.join();

    //以lambda表达式创建线程
    std::thread t4([](int a, int b, int c){
        std::this_thread::sleep_for(std::chrono::seconds(1));
        cout << a << "--" << b << "--" << c << endl;
    }, 4,5,6);
    cout << "ID=" << t4.get_id() << std::endl;

    t1.join();
    cout << "join t1" << endl;
    t2.join();
    cout << "join t2" << endl;
    t4.join();
    cout << "join t4" << endl;
    
    //std::thread t3(func, 3, 4, 5);
    return 0;
}