#include <vector>
#include <algorithm>
#ifndef TASK1_H
#define TASK1_H

//int main();
template<typename T>
std::vector<T> & invert(std::vector<T> & vec){
    std::reverse(std::begin(vec), std::end(vec));
    return vec;
}

#endif // TASK1_H
