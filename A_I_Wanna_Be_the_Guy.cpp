#include <iostream>
using namespace std;

int main() {
    int n, p, q, x;
    cin >> n >> p;
    bool vis[105] = {};
    while (p--) {
        cin >> x;
        vis[x] = 1;
    }
    cin >> q;
    while (q--) {
        cin >> x;
        vis[x] = 1;
    }
    for (int i = 1; i <= n; ++i) {
        if (!vis[i]) {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
}
