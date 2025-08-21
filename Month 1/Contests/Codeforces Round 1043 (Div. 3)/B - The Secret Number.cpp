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
    ll n;
    cin >> n;
    vector<ll> ans;

    for (int i = 1; i <= 18; i++) {
        ll power_of_10 = 1;
        for (int j = 0; j < i; ++j) {
            power_of_10 *= 10;
        }
        ll coef = 1 + power_of_10;
        
        if (coef > n) {
            break;
        }
        
        if (n % coef == 0) {
            ans.push_back(n / coef);
        }
    }

    if (ans.empty()) { // Check for an empty vector
        cout << 0 << endl;
    } else {
        sort(ans.begin(), ans.end());
        cout << ans.size() << endl;
        for (const auto& x : ans) {
            cout << x << " ";
        }
        cout << endl;
    }
}


// -------------------- MAIN --------------------
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t; while (t--) solve();
    return 0;
}
