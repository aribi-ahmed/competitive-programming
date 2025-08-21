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
    int n,m,q; cin >> n >> m >> q;
    vector<ll>a(n), b(m);
    for (auto &x:a) cin >> x;
    for (auto &x:b) cin >> x;

    sort(all(a), greater<ll>());
    sort(all(b), greater<ll>());

    vector<ll> pa(n+1), pb(m+1);
    for (int i=0;i<n;i++) pa[i+1]=pa[i]+a[i];
    for (int i=0;i<m;i++) pb[i+1]=pb[i]+b[i];

    auto F = [&](int z, int t)->ll { return pa[t] + pb[z - t]; };
    auto D = [&](int z, int t)->ll { return a[t] - b[z - t - 1]; }; // f(t+1)-f(t), t in [..z-1]

    while(q--){
        int x,y,z; cin >> x >> y >> z;

        int lo = max(0, z - y);
        int hi = min(z, x);
        lo = max(lo, z - m); // array bounds
        hi = min(hi, n);
        if (lo > hi) { cout << 0 << "\n"; continue; }

        ll best = max(F(z, lo), F(z, hi));
        if (lo < hi){
            int L = lo, R = hi - 1, pos = hi; // first t with D(z,t) <= 0
            while (L <= R){
                int mid = (L + R) >> 1;
                if (D(z, mid) <= 0) pos = mid, R = mid - 1;
                else L = mid + 1;
            }
            if (pos <= hi - 1) {
                best = max(best, F(z, pos));
                best = max(best, F(z, pos + 1)); 
            }
        }
        cout << best << "\n";
    }
}

// -------------------- MAIN --------------------
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t; while (t--) solve();
    return 0;
}
