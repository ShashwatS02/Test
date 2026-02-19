#include <iostream>
#include <vector>
#include <numeric>


using namespace std;

void solve_mex_partition() {
    int num_elements;
    cin >> num_elements;

    
    vector<int> freq_counter(101, 0);
    for (int i = 0; i < num_elements; ++i) {
        int current_val;
        cin >> current_val;
        if (current_val >= 0 && current_val <= 100) {
            freq_counter[current_val]++;
        }
    }

    int min_partition_score = 0;
    
    while (min_partition_score <= 100 && freq_counter[min_partition_score] > 0) {
        min_partition_score++;
    }

    cout << min_partition_score << "\n";
}

int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num_test_cases;
    cin >> num_test_cases;
    while (num_test_cases--) {
        solve_mex_partition();
    }

    return 0;
}