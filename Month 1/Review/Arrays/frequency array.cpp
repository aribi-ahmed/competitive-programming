#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> occ(m+1);
    for(int i = 0; i <n; i++) {
        int x; cin >> x;
        occ[x]++;
    }
    for (int i = 1; i <= m; i++) cout << occ[i] << endl;
    return;
}

int main() {
    solve();
    return 0;
}
