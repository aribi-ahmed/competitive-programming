#include <bits/stdc++.h>
using namespace std;

/* I could make the recursive dynamic version and add a fib global array for the DP, but I saw "ez fib" and the purpose is to review arrays, so I worked with the simple iterative O(n) method. */

void solve() {
    int n; cin >> n;
    vector<int> fib(n);
    fib[0] = 0; fib[1] = 1;
    for (int i = 2; i < n; i++) fib[i] = (fib[i-2]+fib[i-1]);
    
    for (auto& i:fib) cout << i << " ";
} 
int main() {
    solve();
    return 0;
}
