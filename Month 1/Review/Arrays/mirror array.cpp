#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m; 
    vector<vector<int>> a(n);
    for (auto& i: a) {
        for (int j = 0; j < m; j++) {
            int x; cin >> x;
            i.push_back(x);
        }
    }
    for (auto& i: a) {
        reverse(i.begin(), i.end());
    }
    for (auto& i: a) {
        for (auto& j : i) cout << j << " "; cout << endl;
    }
    return;
}

int main() {
    solve();
    return 0;
}
