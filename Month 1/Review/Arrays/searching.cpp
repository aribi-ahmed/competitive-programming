#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto &i: a) cin >> i;
    int x; cin >> x;
    int pos = find(a.begin(), a.end(), x) - a.begin();
    // some pointers manipulation here
    cout << ((pos == a.size())? -1 : pos) << endl;
}

int main() {
    solve();
    return 0;
}
