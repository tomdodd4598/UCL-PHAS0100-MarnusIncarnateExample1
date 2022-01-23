#ifndef VECSTUFF_H
#define VECSTUFF_H

#include <vector>

namespace myvec {

    void print_vec(const std::vector<int>& vec);

    size_t count_vec(const std::vector<int>& vec, const int& target);

    void add_elements(std::vector<int>& vec, int val, int ntimes);
}

#endif
