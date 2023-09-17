#include <iostream>
#include <chrono>
#include <random>
#include <vector>
#include <limits>


int main()
{
    std::numeric_limits<double>::lowest();
    auto start = std::chrono::system_clock::now();
    auto end = std::chrono::system_clock::now();

    std::random_device rd;  // 种子 
    std::mt19937 gen(rd()); // 引擎
    std::uniform_int_distribution<> dis_i(1, 6);//[1,6]
    std::uniform_real_distribution<> dis_d(1, 2);//[1, 2)
    dis_i(gen);//调用
 
    std::chrono::duration<double> diff = end-start;
}
