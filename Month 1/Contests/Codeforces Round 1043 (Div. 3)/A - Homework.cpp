#include <bits/stdc++.h>
using namespace std;

// -------------------- DEBUGGING --------------------
#ifdef LOCAL
#define debug(x) cerr << #x << " = " << (x) << "\n";
#else
#define debug(x)
#endif

// -------------------- TYPE ALIASES --------------------
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<long long,long long>;
#define pb push_back
#define all(v) (v).begin(), (v).end()

// -------------------- CONSTANTS --------------------
const ll INF = 1e18;
const int MOD = 1e9 + 7;

// ------------------ SOLUTION -------------------

void solve() {
    int n, m; string a, b; cin >> n >> a >> m >> b;
    for (int i = 0; i < m; i++) {
        char c; cin >> c;
        if (c == 'D') a += b[i];
        else a = b[i] + a;
    }
    cout << a << endl;
    return;
}


// -------------------- MAIN --------------------
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t; while (t--) solve();
    return 0;
}
