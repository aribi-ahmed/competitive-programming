#include <bits/stdc++.h>
using namespace std;


bool isSubsequence(const vector<int>& a, const vector<int>& b) {

    size_t ptr_a = 0;
    size_t ptr_b = 0;

    while (ptr_a < a.size() && ptr_b < b.size()) {
        if (a[ptr_a] == b[ptr_b]) {
            ptr_b++;
        }
        ptr_a++;
    }
    return ptr_b == b.size();
}

void solve() {
    int n, m; cin >> n  >> m;
    vector<int> a(n), b(m);
    for (auto& i:a) cin >> i;
    for (auto& i:b) cin >> i;

    cout << ((isSubsequence(a, b))? "YES" : "NO") << endl;
    
    return;
}

int main() {
    
    solve();
    return 0;
}
