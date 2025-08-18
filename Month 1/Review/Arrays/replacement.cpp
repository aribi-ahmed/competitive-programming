/* I am supposed to make an array and iterate through it cuz am preparing arrays, but it is so easy and I want to work on performance and optimality */


#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x == 0) cout << 0 << ' ';
        else {
            cout << ((x>0)? 1 : 2) << ' ';
        }
    }
}
int main() {
    solve();
    return 0;
}
