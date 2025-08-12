#include <iostream>
using namespace std;

int main() {

    int row, col, n;
    cout << "Enter you number: ";
    cin >> n;

    // for (row = 1; row <= n; row++) {
    //     for (col = 1; col <= n-row; col++) {
    //         cout << "  ";
    //     }
    //     for (col = row; col >= 1; col--) {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    // for (row = 1; row <= n; row++) {
    //     for (col = 1; col <= n-row; col++) {
    //         cout << "  ";
    //     }
    //     for (col = 1; col <= row; col++) {
    //         char name = 'A'+row-1;
    //         cout << name << " ";
    //     }
    //     cout << endl;
    // }

    // for (row = 1; row <= n; row++) {
    //     for (col = 1; col <= n-row; col++) {
    //         cout << "  ";
    //     }
    //     for (col = n; col >= n-row+1; col--) {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    for (row = 1; row <= n; row++) {
        for (col = 1; col <= n-row; col++) {
            cout << "  ";
        }
        for (char ch = 'A'+n-1; ch >= 'A'+n-row; ch--) {
            cout << ch << " ";
        }
        cout << endl;
    }



    return 0;
}