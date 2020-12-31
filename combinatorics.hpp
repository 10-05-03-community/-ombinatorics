#ifndef COMBINATORICS_HPP
#define COMBINATORICS_HPP

#include <vector>

// n!
// n >= 0
unsigned long long factorial(unsigned n);

// P from n various objects
// n >= 0
unsigned long long permutation(unsigned n);

// P from n various objects with repetitions
// sum(ni) == n
unsigned long long permutation_rep(unsigned n, std::vector<unsigned> ni = std::vector<unsigned>(1, 1));

// A k objects from n various
// 0 <= k <= n
unsigned long long arrangement(unsigned n, unsigned k);

// A k objects from n various with repetitions
// 0 <= k <= n
unsigned long long arrangement_rep(unsigned n, unsigned k);

// C k objects from n various
// 0 <= k <= n
unsigned long long combinations(unsigned n, unsigned k);

// C k objects from n various with repetitions
// 0 <= k <= n
unsigned long long combinations_rep(unsigned n, unsigned k);


#endif // COMBINATORICS_HPP
