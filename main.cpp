#include <iostream>
#include "combinatorics.hpp"

int main() {
    std::cout << "P(5) = " << permutation(5) << std::endl;
    std::cout << "P(5; 1, 2, 2) = " << permutation_rep(5, {1, 2, 2}) << std::endl;
    std::cout << "A(5, 3) = " << arrangement(5, 3) << std::endl;
    std::cout << "A^(5, 3) = " << arrangement_rep(5, 3) << std::endl;
    std::cout << "C(5, 3) = " << combinations(5, 3) << std::endl;
    std::cout << "C^(5, 3) = " << combinations_rep(5, 3) << std::endl;

    std::cout << std::endl;

    std::cout << "P(0) = " << permutation(0) << std::endl;
    std::cout << "P(0; 0, 0, 0) = " << permutation_rep(0, {0, 0, 0}) << std::endl;
    std::cout << "A(0, 0) = " << arrangement(0, 0) << std::endl;
    std::cout << "A^(0, 0) = " << arrangement_rep(0, 0) << std::endl;
    std::cout << "C(0, 0) = " << combinations(0, 0) << std::endl;
    std::cout << "C^(0, 0) = " << combinations_rep(0, 0) << std::endl;


    return 0;
}
