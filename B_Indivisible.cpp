#include <bits/stdc++.h>
using namespace std;
#define int long long

void perm() {
    int n; cin >> n;
    if (n == 1) { cout << "1\n"; return; }
    if (n % 2) { cout << "-1\n"; return; }
    vector<int> arr(n);
    for (int i = 1; i <= n; i += 2) {
        arr[i - 1] = i + 1;
        arr[i] = i;
    }
    for (int x : arr) cout << x << " ";
    cout << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T; cin >> T;
    while (T--) { perm(); }
    return 0;
}
