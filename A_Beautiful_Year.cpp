#include <iostream>
using namespace std;

int main() {
    int y;
    cin >> y;
    for (;;) {
        int temp = ++y, cnt[10] = {};
        for (int i = 0; i < 4; ++i) cnt[temp % 10]++, temp /= 10;
        if (cnt[0] < 2 && cnt[1] < 2 && cnt[2] < 2 && cnt[3] < 2 &&
            cnt[4] < 2 && cnt[5] < 2 && cnt[6] < 2 && cnt[7] < 2 &&
            cnt[8] < 2 && cnt[9] < 2) {
            cout << y << '\n';
            break;
        }
    }
}
