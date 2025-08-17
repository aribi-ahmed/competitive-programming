#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    float x, y;
    cin >> x >> y;
    cout << "floor " << x << " / " << y << " = " << floor(x / y) << endl;
    cout << "ceil " << x << " / " << y << " = " << ceil(x / y) << endl;
    cout << "round " << x << " / " << y << " = " << round(x / y) << endl;
}
 
int main() {
    solve();
    return 0;
}
