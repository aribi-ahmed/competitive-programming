/* Link for the problem statement: https://dmoj.ca/problem/coci23c2p1 */
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define pii pair<int,int>
#define fi first
#define se second
#define pb push_back
#define endl '\n'
#define mp make_pair
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool sizeflake(vector<vector<char>> &tab, int x, int y, int size, int n, int m) {
    if (x - size < 0 || y - size < 0) return false;
    if (x + size >= n || y + size >= m) return false;
    // there are 8 checkings
    // 1 and 2
    for (int i =x -size; i <= x+size; i++) {
        if (i == x) continue;
        if (tab[i][y] != '|') return false;
    }
    // 3 and 4
    for (int i = y-size; i <= y+size; i++) {
        if (i == y) continue;
        if (tab[x][i] != '-') return false;
    }
    // 5 and 6
    int i = x-1, j = y - 1;
    while(i >= x - size && j >= y - size) {
        if (tab[i][j] != '\\') return false;
        i--, j--;
    }
    i = x + 1, j = y+ 1;
    while(i <= x + size && j <= y + size) {
        if (tab[i][j] != '\\') return false;
        i++, j++;
    }

    // 7 and 8
    i = x + 1, j = y - 1;
    while(i <= x + size && j >= y - size) {
        if (tab[i][j] != '/') return false;
        i++, j--;
    }
    i = x - 1, j = y + 1;
    while(i >= x - size && j <= y + size) {
        if (tab[i][j] != '/') return false;
        i--, j++;
    }
    
    return true;
}


int32_t main() {
    fastio

    int n, m;
    cin >> n >> m;
    vector<vector<char>> tab(n, vector<char>(m));
    vector<pii> pos;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> tab[i][j];
            if (tab[i][j] == '+') pos.pb(mp(i,j));
        }
    }
    if (n < 3 || m < 3) {
        cout << 0 << endl;
        return 0;
    }
    int ans = 0;
    for (auto &pair : pos) {
        int x = pair.fi, y = pair.se;
        int size = 1;
        while(sizeflake(tab, x, y, size, n, m)) {
            ans = max(ans, size);
            size++;
        }
    }
    cout << ans << endl;

    return 0;
}
