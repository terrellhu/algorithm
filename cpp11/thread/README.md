#### 线程的使用thread.cpp
    编译：g++ -std=c++11 -pthread thread.cpp
    同一进程内，线程ID会重复，如果join结束后再开始新的线程

#### 互斥锁的使用
    编译：g++ -std=c++11 -pthread mutex.cpp
    std::mutex: 独占的互斥量,不能递归使用.
    std::timed_mutex: 带超时的独占互斥量,不能递归使用.
    std::recursive_mutex: 递归互斥量,不带超时功能.
    std::recursive_timed_mutex: 带超时的递归互斥量.