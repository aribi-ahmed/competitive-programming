#include <bits/stdc++.h>
using namespace std;

/* I just wanted to implement the Bubble Sort cuz it's shortest and I am being a bit lazy. However, I tried to make it a bit optimal with the swapped checker 
TBH: running time was 61ms without this optimization and it became 62ms... Weird I know but IDGF */

void Bubble_Sort(vector<int>& a) {
    int n = a.size();
    int i = 0;
    bool swapped = true;
    while (i < n-1 && swapped) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j+1]) {
                swap(a[j], a[j+1]); swapped = true;
            }
        }
        i++;
    }
}
void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto& i : a) cin >> i;
    Bubble_Sort(a);
    for (auto& i : a) cout << i << " ";
    return;

}

int main() {
    solve();
    return 0;
}
