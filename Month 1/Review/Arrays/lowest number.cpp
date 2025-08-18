#include <bits/stdc++.h>
using namespace std;

/* I could simply make two integers one for the index and other for the minimum value but I wanted to try using pairs... It's been a while tho. */


pair<int,int> maxi(const vector<int>& arr) {
    pair<int, int> p(1, arr[0]);
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < p.second) {
            p.first = i+1; p.second = arr[i];
        }
    }
    return p;
}
void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    for (auto&i : arr) cin >> i;
    cout << maxi(arr).second << " " << maxi(arr).first << endl;
}

int main() {
    solve();
    return 0;
}
