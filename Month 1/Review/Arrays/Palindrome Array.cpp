#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int arr[n];
    for (auto& i: arr) cin >> i;
    for (int i = 0; i < n/2; i++) {
        if (arr[i] != arr[n-i-1]) {
            cout << "NO" << endl; return;
        }
    }
    cout << "YES" << endl; 
} 
int main() {
    solve();
    return 0;
}
