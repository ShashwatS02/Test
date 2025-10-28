#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <cmath>
#include <algorithm>

long long calculate_min_moves(const std::string& s, char target_char) {
    std::vector<int> locations;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == target_char) {
            locations.push_back(i);
        }
    }

    if (locations.size() < 2) {
        return 0;
    }

    std::vector<long long> transformed_pos;
    for (int i = 0; i < locations.size(); ++i) {
        transformed_pos.push_back(locations[i] - i);
    }
    
    long long median_val = transformed_pos[transformed_pos.size() / 2];
    
    long long total_cost = 0;
    for (long long pos : transformed_pos) {
        total_cost += std::abs(pos - median_val);
    }
    
    return total_cost;
}

void process_test_case() {
    int n;
    std::cin >> n;
    std::string text;
    std::cin >> text;

    long long cost_a = calculate_min_moves(text, 'a');
    long long cost_b = calculate_min_moves(text, 'b');

    std::cout << std::min(cost_a, cost_b) << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int num_tests;
    std::cin >> num_tests;
    while (num_tests--) {
        process_test_case();
    }
    
    return 0;
}