cmake_minimum_required(VERSION 3.13)
project(algorithm)

set(CMAKE_CXX_STANDARD 17)

include_directories(/usr/local/Cellar/boost/1.69.0_2/include)

add_executable(majority ./2019/20190302/majority.cpp)
add_executable(searchMatrix ./2019/20190303/search_matrix.cpp)
add_executable(mergeArray ./2019/20190304/merge_array.cpp)
add_executable(dropEgg ./2019/20190304/drop_egg.cpp)
add_executable(isPalindrome ./2019/20190305/palindrome.cpp)
add_executable(levelOrder ./2019/20190520/levelOrder.cpp)
add_executable(2stack4queue ./2019/20190525/2stack4queue.cpp)
add_executable(2queue4stack ./2019/20190525/2queue4stack.cpp)
add_executable(minstack 2019/20190525/minstack.cpp)
add_executable(isOrderOk 2019/20190525/is_order_ok.cpp)
add_executable(arrayfor2stack 2019/20190525/arrayfor2stack.cpp)
