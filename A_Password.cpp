#include <iostream>
#include <vector>

using namespace std;

/**
 * Solves an individual test case.
 * Logic: Calculates C(available_digits, 2) * 6 permutations.
 */
void execute_case() {
    int excluded_size;
    if (!(cin >> excluded_size)) return;

    // Reading the excluded digits
    vector<int> excluded_list(excluded_size);
    for (int i = 0; i < excluded_size; ++i) {
        cin >> excluded_list[i];
    }

    // Number of digits available to form the password
    int available = 10 - excluded_size;

    if (available < 2) {
        cout << 0 << "\n";
        return;
    }

    // Mathematical formula: (available * (available - 1) / 2) * 6
    long long total_passwords = 3LL * available * (available - 1);
    
    cout << total_passwords << "\n";
}

int main() {
    // Optimization for faster I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int query_count;
    if (!(cin >> query_count)) return 0;

    while (query_count--) {
        execute_case();
    }

    return 0;
}