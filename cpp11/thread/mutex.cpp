#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

std::mutex g_lock;

void func()
{
    g_lock.lock();
    cout << "in id:" << this_thread::get_id() << endl;
    this_thread::sleep_for(std::chrono::seconds(1));
    cout << "out id:" << this_thread::get_id() << endl;
    g_lock.unlock();
}

void f()
{
    lock_guard<std::mutex> lock(g_lock);
    cout << "in id:" << this_thread::get_id() << endl;
    this_thread::sleep_for(std::chrono::seconds(1));
    cout << "out id:" << this_thread::get_id() << endl;
}

int main()
{
    std::thread t1(func);
    std::thread t2(func);
    std::thread t3(func);

    t1.join();
    t2.join();
    t3.join();
}