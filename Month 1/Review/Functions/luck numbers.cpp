#include <bits/stdc++.h>
using namespace std;

bool lucky(const int& x) {
    string s = to_string(x);
    set<char> check;
    for (auto& i: s) check.insert(i);
    s = "";
    for (auto& i: check) s += i;
    return s == "47" || s == "74" || s == "7" || s == "4";
}

void solve() {
    int a, b; cin >> a >> b; bool ok = false;
    for (int i = a; i <= b; i++) {
        if (lucky(i)) {
            ok = true;
            cout << i << " ";
        }
    }
    if (not ok) cout << -1 << endl;
}

int main() {
    solve();
    return 0;
}
