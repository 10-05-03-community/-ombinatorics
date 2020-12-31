#include "combinatorics.hpp"

// check overflaw in future

unsigned long long factorial(unsigned n) {
    unsigned long long res = 1;
    for (unsigned i = 2; i <= n; ++i) {
        res *= i;
    }
    return res;
}


unsigned long long permutation(unsigned n) {
    return factorial(n);
}


unsigned long long permutation_rep(unsigned n, std::vector<unsigned> ni) {
    unsigned long long res = permutation(n);
    unsigned long long sum = 0;
    for (size_t i = 0; i < ni.size(); ++i) {
        sum += ni[i];
        if (sum > n) return 0;
        res /= permutation(ni[i]);
    }
    return res;
}

unsigned long long arrangement(unsigned n, unsigned k) {
    if (n < k) return 0;
    unsigned long long res = n - k + 1;
    for (unsigned i = n - k + 2; i <= n; ++i) {
        res *= i;
    }

    return res;
}

unsigned long long arrangement_rep(unsigned n, unsigned k) {
    unsigned res = 1;
    for (unsigned i = 1; i <= k; ++i) {
        res *= n;
    }
    return res; // return permutation(n) / permutation(n-k);
}

unsigned long long combinations(unsigned n, unsigned k) {
    if (n < k) return 0;
    return arrangement(n, k) / permutation(k);
}

unsigned long long combinations_rep(unsigned n, unsigned k) {
    if (n == 0) return 0;
    return combinations(n - 1 + k , k);
}

