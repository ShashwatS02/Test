#include <iostream>
using namespace std;

int main() {

    int row, col, n;
    cout << "Enter your number: ";
    cin >> n;

    // for (row = 1; row <= n; row++) {
    //     for (col = 1; col <= row; col++) {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }
    // for (col = 1; col <= 6; col++) {
    //     cout << col << " ";
    // }

    // for (row = 1; row <= n; row++) {
    //     for (col = 1; col <= row; col++) {
    //         char name = 'A'+col-1;
    //         cout << name << " ";
    //     }
    //     cout << endl;
    // }

    // for (row = 1; row <= n; row++) {
    //     for (col = 1; col <= row; col++) {
    //         int num = 10+col-1;
    //         cout << num << " ";
    //     }
    //     cout << endl;
    // }

    for (row = n; row >= 1; row--) {
        for (col = 1; col <= row; col++) {
            char name = 'A'+col-1;
            cout << name << " ";
        }
        cout << endl;
    }

    return 0;
}