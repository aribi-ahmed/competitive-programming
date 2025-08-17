#include <bits/stdc++.h>
using namespace std;

int dig(const int& x) {
    int sum = 0;
    string s = to_string(x);
    for (auto &i : s) sum += i - '0';
    return sum;
}

void solve() {
    int n, a, b; cin >> n >> a >> b;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (a <= dig(i) && dig(i) <= b) sum += i;
    }
    
    cout << sum << endl;
}

int main() {
    solve();
    return 0;
}
