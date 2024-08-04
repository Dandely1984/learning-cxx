﻿#define _CRT_SECURE_NO_WARNINGS
#ifndef __EXERCISE_H__
#define __EXERCISE_H__

#include <iostream>

#define ASSERT(COND, MSG)                                                                         \
    if (!(COND)) {                                                                                \
        std::cerr << "\x1b[31mAssertion failed at line #" << __LINE__ << ": \x1b[0m" << std::endl \
                  << std::endl                                                                    \
                  << #COND << std::endl                                                           \
                  << std::endl                                                                    \
                  << "\x1b[34mMessage:\x1b[0m" << std::endl                                       \
                  << std::endl                                                                    \
                  << MSG << std::endl                                                             \
                  << std::endl;                                                                   \
        exit(1);                                                                                  \
    }

#endif// __EXERCISE_H__

#include <numeric>

// READ: `std::accumulate` <https://zh.cppreference.com/w/cpp/algorithm/accumulate>

int main(int argc, char** argv) {
    using DataType = float;
    int shape[]{ 1, 3, 224, 224 };
    // TODO: 调用 `std::accumulate` 计算：
    //       - 数据类型为 float；
    //       - 形状为 shape；
    //       - 连续存储；
    //       的张量占用的字节数
    int size = std::accumulate(shape, shape + sizeof(shape) / sizeof(int), 1, std::multiplies<int>()) * sizeof(DataType);
 
    return 0;
}