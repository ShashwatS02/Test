#include <iostream>

int main() {
    // Speeds up input/output operations in C++
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long l, r;
    std::cin >> l >> r;

    // A solution of this form is always possible given the problem constraints.
    std::cout << "YES\n";

    // Iterate through the numbers from l to r, taking two at a time to form a pair.
    for (long long i = l; i <= r; i += 2) {
        // Print the consecutive pair (i, i + 1). Their GCD is always 1.
        std::cout << i << " " << i + 1 << "\n";
    }

    return 0;
}