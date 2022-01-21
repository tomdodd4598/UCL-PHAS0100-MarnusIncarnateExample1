#include "vecstuff.hpp"

#include <iostream>
#include <vector>

namespace myvec {

    void print_vec(const std::vector<int>& vec) {
        auto start = true;
        std::cout << "[";
        for (const auto& i : vec) {
            if (start) {
                start = false;
            }
            else {
                std::cout << ", ";
            }
            std::cout << i;
        }
        std::cout << "]" << std::endl;
    }

    size_t count_vec(const std::vector<int>& vec, const int& target) {
        size_t count = 0;
        for (const auto& i : vec) {
            if (i == target) {
                ++count;
            }
        }
        return count;
    }

    void add_elements(std::vector<int>& vec, int val, int ntimes) {
        for (int i = 0; i < ntimes; ++i) {
            vec.push_back(val);
        }
    }
}
