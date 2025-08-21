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

// --------- HELPERS: sum of digits from 0..n in O(log n)  ----------
static inline long long sumdig_0_to_n(long long n){
    if(n < 0) return 0;
    long long res = 0;
    for(long long p = 1; p <= n; p *= 10){
        long long higher = n / (p * 10);
        long long curr   = (n / p) % 10;
        long long lower  = n % p;
        res += higher * 45LL * p;
        res += (curr * (curr - 1) / 2) * p;
        res += curr * (lower + 1);
    }
    return res;
}

static inline long long sumdig_range(long long a, long long b){
    if(a > b) return 0;
    return sumdig_0_to_n(b) - sumdig_0_to_n(a - 1);
}

// Precompute powers of 10
static bool PREPARED = false;
static long long p10[19], blockLen[19], blockSum[19];

static inline void prepare(){
    if(PREPARED) return;
    p10[0] = 1;
    for(int i = 1; i <= 18; ++i) p10[i] = p10[i-1] * 10LL;
    for(int d = 1; d <= 18; ++d){
        blockLen[d] = 1LL * d * 9LL * p10[d-1];
        long long hi = p10[d] - 1;
        long long lo = p10[d-1] - 1;
        blockSum[d] = sumdig_0_to_n(hi) - sumdig_0_to_n(lo);
    }
    PREPARED = true;
}

// ------------------ SOLUTION: Champernowne Sequence -------------------
void solve() {
    prepare();
    long long k; 
    cin >> k;

    long long ans = 0;
    for(int d = 1; d <= 18; ++d){
        if(k == 0) break;
        if(k >= blockLen[d]){
            ans += blockSum[d];
            k   -= blockLen[d];
            continue;
        }

        long long start = p10[d-1];
        long long q = k / d;
        long long r = k % d;
        if(q > 0){
            ans += sumdig_range(start, start + q - 1);
        }
        if(r > 0){
            long long x = start + q;
            string s = to_string(x);
            for(int i = 0; i < r; ++i) ans += (s[i] - '0');
        }
        k = 0;
    }

    cout << ans << '\n';
}

// -------------------- MAIN --------------------
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t; while (t--) solve();
    return 0;
}
