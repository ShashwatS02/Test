#include <bits/stdc++.h>
using namespace std;

// char convert (char name) {
//     char ans = name - 'a' + 'A';
//     return ans;
// }

int countdigit(int n) {
    int count = 0;

    while (n) {
        count ++;
        n /= 10;
    }
    return count;
}

bool Armstrong(int num, int digit) {
    int n = num, ans = 0, rem;

    while (n) {
        rem = n%10;
        n/=10;
        int power = 1;
        for (int i = 0; i < digit; i++) {
        power *= rem;
        }
        ans += power;
    }
    if (ans == num) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {

    // char name;
    // cin >> name;

    // cout << convert(name);

    //armstrong number

    int num;
    cin >> num;

    //count digit
    int digit = countdigit (num);
    // Armstrong number
    cout << Armstrong(num, digit);

    return 0;
}