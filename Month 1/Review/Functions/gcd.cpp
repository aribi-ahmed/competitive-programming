#include <bits/stdc++.h>
using namespace std;
 
int gcd (const int& a, const int& b) {
    if (max(a,b)% min(a,b) == 0) {
        return min(a, b);
    }
    return (gcd(min(a, b), max(a,b)% min(a,b)));
}
void solve() {
    int a, b; cin >> a >> b;
    cout << gcd(a, b) << endl;
}
 
int main() {
    solve();
    return 0;
}
