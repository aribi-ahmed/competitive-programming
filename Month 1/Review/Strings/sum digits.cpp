#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    int sum = 0;
    while (t--) {
        char x; cin >> x;
        sum += x-'0';
    }
    cout << sum << endl;
}
