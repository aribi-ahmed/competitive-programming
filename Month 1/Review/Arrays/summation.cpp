#include <bits/stdc++.h>
using namespace std;
#define int long long
// 0 <=  |Ai| <= 1e9

void solve() {
    int n; cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x; sum += x;
    }
    cout << abs(sum) << endl;
    return;
}

int32_t main() {
    solve();
    return 0;
}
