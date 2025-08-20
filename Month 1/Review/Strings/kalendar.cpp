/* Link for the problem statement: https://dmoj.ca/problem/coci22c5p1 */
#include <bits/stdc++.h>  
using namespace std;
 
typedef long long ll;
#define endl '\n'
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
void void_to_day(string &s, int i, int n) {
    if (to_string(n).size() == 1) {
        s[i] = '.', s[i+1] = '.', s[i+2] = '0' + n;
    }
    else {
        s[i] = '.', s[i+1] = '0' + n/10, s[i+2] = '0' + n%10;
    }
}
int main()
{
    fast_cin();
    int n, d; cin >> n >> d;
    int nb = ceil((ceil(double(n+d-8)) / 7) + 1);
    int line = nb+2;

    vector<string> cal(line, string(23, '.'));
    cal[0] = "+---------------------+";
    cal[line-1] = cal[0];
    for (int i = 1; i < line-1; i++) {
        cal[i][0] = '|';
        cal[i][22] = '|';
    }
    int cnt = n-1;
    int start = 3 * d - 2;
    bool flag = true;
    for (int i = start; i < 22; i+=3) {
        if(n-cnt<=n){
        void_to_day(cal[1], i, n-cnt);
        cnt--; 
        }
        else {
            flag = false;
            break;
        }
    }
    if (flag) {
        for (int i = 2; i < line -1; i++) {
            if (flag) {
                for (int j = 1; j < 22; j+= 3) {
                    if (n-cnt <= n) {
                        void_to_day(cal[i], j, n-cnt); cnt--;
                    }
                    else {
                        break;
                        flag= false;
                    }
                }
            }
        }
    }
    for (auto i : cal) {
        for (auto j : i) cout << j;
        cout << endl;
    }
    return 0;
}
