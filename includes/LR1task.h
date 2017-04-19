#include <vector>
#include <algorithm>
#ifndef LR1TASK_H
#define LR1TASK_H

template<typename T>
std::vector<T> & invert(std::vector<T> & vec){
    std::reverse(std::begin(vec), std::end(vec));
    return vec;
}

#endif // LR1TASK_H
