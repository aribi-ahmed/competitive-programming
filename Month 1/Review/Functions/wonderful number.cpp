#include <bits/stdc++.h>
using namespace std;
 
string bin(int x) {
    string binary = "";
    while (x != 0) {
        binary += to_string(x%2);
        x /= 2;
    }
    return binary;
}
 
bool palindrome(const string& s) {
    string reverse = "";
    for (auto& i : s) reverse = i + reverse;
    return reverse == s;
}
 
bool wonderful(const int& a) {
    string binary = bin(a);
    return (palindrome(binary) && (a % 2));
}
 
void solve() {
    int a; cin >> a;
    cout << ((wonderful(a))? "YES" : "NO") << endl;
}
 
int main() {
    solve();
    return 0;
}
