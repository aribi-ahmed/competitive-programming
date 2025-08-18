#include <bits/stdc++.h>
using namespace std;



int maxi(const vector<int>& arr) {
    int m = arr[0];
    for (auto& i: arr) {
        m = (i > m)? i: m;
    }
    return m;
}
void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    for (auto&i : arr) cin >> i;
    cout << maxi(arr) << endl;
}

int main() {
    solve();
    return 0;
}
