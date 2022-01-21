#include "vecstuff.hpp"

#include <iostream>
#include <vector>

namespace myvec {

    void print_vec(const std::vector<long>& vec) {
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

    size_t count_vec(const std::vector<long>& vec, const long& target) {
        size_t count = 0;
        for (const auto& i : vec) {
            if (i == target) {
                ++count;
            }
        }
        return count;
    }
}
