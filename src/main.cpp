#include "vecstuff.hpp"

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char** argv) {

    int a = 0;

    if (argc > 1) {
        a = std::stol(argv[1]);
    }

    auto vec = std::vector<int>{1, 2, 3, 4, 5, 4, 3, 2, 1};

    myvec::print_vec(vec);
    std::cout << "Counts of " << a << ": " << myvec::count_vec(vec, a) << std::endl;

    myvec::add_elements(vec, 5, 10);
    myvec::print_vec(vec);

    return 0;
}
