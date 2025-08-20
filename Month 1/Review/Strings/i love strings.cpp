#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a, b; cin >> a >> b; int n = a.size(), m = b.size();
    int i = 0; bool check = true;
    string ans = "";
    for (int i = 0; i < max(n, m); i++) {
        if (i >= n && i < m) {
            ans += b.substr(i, m-i);
            break;
        }
        else if (i >= m && i < n) {
            ans += a.substr(i, n-i);
            break;
        }
        else if (i < min(n, m)) {
            ans += a[i]; ans += b[i];
        }

    }
    cout << ans << endl;
    return;
}

int main() {
    int t; cin >> t; while(t--) solve(); return 0;
}  
