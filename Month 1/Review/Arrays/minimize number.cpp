#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n; cin >> n;
    int mii = INT_MAX;
    while (n--) {
        int x; cin >> x;
        int c = 0; 
        while (!(x%2)) {
            x /= 2;
            c++;
        }
        mii = min(mii, c);
    }
    cout << mii << endl;
}
int main() {
    solve();
    return 0;
}
