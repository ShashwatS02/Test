#include <iostream>
int main() {
    int n, res = 0;
    std::string s;
    std::cin >> n >> s;
    for (int i = 1; i < n; ++i)
        if (s[i] == s[i-1]) ++res;
    std::cout << res << '\n';
}
