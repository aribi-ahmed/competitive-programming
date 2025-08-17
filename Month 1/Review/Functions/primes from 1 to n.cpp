#include <bits/stdc++.h>
using namespace std;

void eratosthenes(const int& n) {
    vector<bool> a(n+1,1);
    int i = 2;
    while (i <= n) {
        if (a[i] == 1) {
            cout << i << " ";
            for (int j = i+i; j <= n; j += i) {
                a[j] = 0;
            }
            
        }
        i++;
    }
    return;
}

void solve() {
    int a; cin >> a;
    eratosthenes(a);
}

int main() {
    solve();
    return 0;
}
