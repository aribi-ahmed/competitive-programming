#include <bits/stdc++.h>
using namespace std;
/* There are many other more optimal solutions in this case, like making frequency array and checking for zeros. However
I wanted to seize the opportunity and work on maps. A quick review as usual. */
void solve() {
    string s; cin >> s;
    map<char, int> m;
    for (const auto& c: s) {
        m[c] = 0;
    }
    for (const auto& c: s) {
        m[c] += 1;
    }
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    for (const auto& i: alpha) {
        if (m.find(i) != m.end()) cout << i << " : " << m[i] << endl;
    }
    
}


int main() {
    solve();
    
    return 0;
}
