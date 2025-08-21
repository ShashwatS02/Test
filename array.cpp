#include <bits/stdc++.h>
using namespace std;

int main() {

    // int arr[6];
    // for (int i = 0; i < 6; i++) {
    //     cin >> arr[i];
    //     cout << arr[i] << " ";
    // }

    // int arr[5] = {1,2,3,4,5};
    // cout << sizeof(arr)/sizeof(arr[0]) << " ";

    //Min value
    int arr[5] = {2,3,1,7,8};
    int ans = INT_MAX;
    for (int i = 0; i<5; i++) {
        if (arr[i] < ans) {
            ans = arr[i];
        }
    }
    cout << ans << endl;

    //Max value
    ans = INT_MIN;
    for (int i = 0; i<5; i++) {
        if (arr[i] > ans) {
            ans = arr[i];
        }
    }
    cout << ans << endl;

    return 0;
}