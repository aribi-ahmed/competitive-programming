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
using pll = pair<ll,ll>;
#define pb push_back
#define all(v) (v).begin(), (v).end()

// -------------------- CONSTANTS --------------------
const ll INF = 1e18;
const int MOD = 1e9 + 7;

// ------------------ SOLUTION -------------------

void solve() {
    ll n;
    cin >> n;
    ll ans = 0;

    for (int i = 19; i >= 0; i--) {
        ll power_of_3 = 1;
        for (int j = 0; j < i; ++j) {
            power_of_3 *= 3;
        }

        ll deal_cost = power_of_3 * 3 + (i > 0 ? (ll)i * (power_of_3 / 3) : 0);

        while (n >= power_of_3) {
            ans += deal_cost;
            n -= power_of_3;
        }
    }
    cout << ans << endl;
}


// -------------------- MAIN --------------------
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t; while (t--) solve();
    return 0;
}
