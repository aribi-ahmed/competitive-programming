#include <bits/stdc++.h>
using namespace std;

/* WHY using arrays when we have something called multisets??? a simply lovely binary search tree, so less time consuming and less coding :)))
*/

void solve() {
    int n; cin >> n;
    multiset<int> a, b;
    for (int i = 0; i < n; i++) {
        int x; cin >> x; a.insert(x);
    }
    for (int i = 0; i < n; i++) {
        int x; cin >> x; b.insert(x);
    }
    cout << ((a == b)? "yes" : "no") << endl;
}
int main() {
    solve();
    return 0;
}
