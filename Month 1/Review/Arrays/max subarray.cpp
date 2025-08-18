#include <bits/stdc++.h>
using namespace std;

/* This problem knew well how to play with my nerves, I forgot all pointers and references, I had to check all garbage in my memory for the "max_element"
and how to access the data that the pointer is calling. Checking all subarrays here is not optimal, I forgot if there is another more optimal way. However,
it is 00:51 and I am kinda tired so this is considered done. */

bool cmp(const vector<int>& v, const vector<int>& w) {
    return v.size() < w.size();
}

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto& i: a) cin >> i;
    vector<vector<int>> x;
    int l = 0, r = 1;
    while (l < n) {
        vector<int> v;
        for (int i = l; i < r; i++) {
            v.push_back(a[i]);
        }
        x.push_back(v);
        if (r == n) {
            l++;
            r = l+1;
        }
        else r++;
    }
    sort(x.begin(), x.end(), cmp);
    for (auto& i: x) {
        cout << *max_element(i.begin(), i.end()) << " ";
    }
    cout << endl;
    return;
}
int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
