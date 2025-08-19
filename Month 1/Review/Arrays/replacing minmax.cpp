#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int M = 0, m = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        M = (a[i]>a[M])? i : M;
        m = (a[i]<a[m])? i : m;
    }
    swap(a[M], a[m]);
    for (auto& i : a) cout << i << " ";
    cout << endl;
    return;
}
int main() {
    solve();
    return 0;
}
