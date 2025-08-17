#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll A, B, C, D;
    cin >> A >> B >> C >> D;

    if (A == 1 && C == 1) {
        cout << "NO" << endl;
    } else if (A == 1) {
        cout << "NO" << endl;
    } else if (C == 1) {
        cout << "YES" << endl;
    } else {
        ll val1 = B * log(A);
        ll val2 = D * log(C);
        
        cout << ((val1 > val2)? "YES" : "NO") << endl;
    }

    return 0;
}
