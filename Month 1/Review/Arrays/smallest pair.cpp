#include <bits/stdc++.h>
using namespace std;

/* I kept fighting with the initialization of the answer, I was trying a[0] + a[1] + 1 - 0, but, it gave me WA on TC2.
Then, I remembered INT_MAX and INT_MIN :') */

int pairs(const vector<int>& a) {
    int n = a.size();

    int ans = INT_MAX; 
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            ans = min(ans, a[i] + a[j] + j - i);
        }
    }
    return ans;
}
void solve() {
    int n; cin >> n;
    vector<int> a(n); for (auto& i: a) cin >> i;
    cout << pairs(a) << endl;
    return;
}
int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
