#include <bits/stdc++.h>
using namespace std;

void run() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    if (n == 1) {
        cout << a[0] << "\n";
        return;
    }
    int x = 0;
    for (auto y : a) x ^= y;
    if (n % 2 == 0) {
        cout << (x == 0 ? 0 : -1) << "\n";
    } else {
        cout << x << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin >> T;
    while (T--) run();
    return 0;
}
