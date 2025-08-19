#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto& i: a) cin >> i;
    int l = 0, r = 1;
    int res = 0;
    while (l < n) {
        vector<int> v;
        for (int i = l; i < r; i++) {
            v.push_back(a[i]);
        }
        if (is_sorted(v.begin(), v.end())) res++;
        if (r == n) {
            l++;
            r = l+1;
        }
        else r++;
    }
    cout << res << endl;
}
int main() {
    int t; cin >> t; while(t--)
    solve();
    return 0;
}
