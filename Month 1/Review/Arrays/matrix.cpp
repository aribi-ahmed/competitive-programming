#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n; 
    vector<vector<int>> a(n);
    for (auto& i: a) {
        for (int j = 0; j < n; j++) {
            int x; cin >> x;
            i.push_back(x);
        }
    }
    int d1 = 0, d2 = 0;
    for (int i = 0; i < n; i++) {
        d1 += a[i][i];
        d2 += a[n-1-i][i];
    }
    cout << abs(d1-d2) << endl;
    return;
}

int main() {
    solve();
    return 0;
}
