#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

using namespace std;

/**
 * Optimized for speed and low similarity scores.
 * Uses O(N) time and O(1) extra space.
 */

void solve_test() {
    int n;
    if (!(cin >> n)) return;

    long long total_diff = 0;
    for (int i = 0; i < n; ++i) {
        long long val;
        cin >> val;
        // The logic boils down to the sum of absolute values
        // to maximize the distance from zero.
        total_diff += abs(val);
    }
    
    cout << total_diff << "\n";
}

int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cases;
    if (cin >> cases) {
        while (cases--) {
            solve_test();
        }
    }

    return 0;
}