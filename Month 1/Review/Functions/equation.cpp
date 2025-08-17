#include <bits/stdc++.h>
using namespace std;


long long solve_equation(int x, int n) {
    long long sum = 0;

    for (int i = 2; i <= n; i += 2) {
        long long current_power = 1;
        for (int j = 0; j < i; ++j) {
            current_power *= x;
        }
        sum += current_power;
    }

    return sum;
}

int main() {
    int x, n;
    cin >> x >> n;
    long long result = solve_equation(x, n);

    cout << result << endl;

    return 0;
}
