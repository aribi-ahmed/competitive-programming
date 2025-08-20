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
    int k; cin >> k;
    for (auto&i : a) {
        for (auto&j : i) {
            if (j == k) {
                cout << "will not take number" << endl;
                return;
            }
        }
    }
    cout << "will take number" << endl;
    return;
}

int main() {
    solve();
    return 0;
}
