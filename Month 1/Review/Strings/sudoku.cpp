/* Link to problem statement: https://dmoj.ca/problem/coci23c1p1 */

#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int32_t main() {
    fastio
    vector<vector<char>> sudoku(13, vector<char>(13, '.'));
    for (int i = 0; i < 13; i++) {
        for (int j = 0; j < 13; j++) {
            char x; cin >> x;
            sudoku[i][j] = x;
        }
    }
    vector<bool> check(9, false);
    for (int i = 0; i < 13; i++) {
        check.assign(9, false);
        for (int j = 0; j < 13; j++) {
            char item = sudoku[i][j];
            if (item == '.' || item == '+' || item == '|' || item == '-') continue;
            else {
                if (check[item - '1'] == false) {
                    check[item-'1'] = true;
                }
                else {
                    cout << "GRESKA" << endl;
                    return 0;
                }
            }
        }
    }
    for (int i = 0; i < 13; i++) {
        check.assign(9, false);
        for (int j = 0; j < 13; j++) {
            char item = sudoku[j][i];
            if (item == '.' || item == '+' || item == '|' || item == '-') continue;
            else {
                if (check[item - '1'] == false) {
                    check[item -'1'] = true;
                }
                else {
                    cout << "GRESKA" << endl;
                    return 0;
                }
            }
        }
    }
    
    for (int i = 1 ; i < 13; i += 4) {
        for (int j = 1; j < 13; j += 4) {
            check.assign(9, false);
            for (int l = i; l < i+3; l++) {
                for (int c = j; c  < j + 3 ; c++) {
                    char item = sudoku[l][c];
                    if (item == '.') continue;
                    else {
                        if (check[item-'1'] == false) check[item-'1'] = true;
                        else {
                            cout << "GRESKA" << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }


    

    cout << "OK" << endl;

    return 0;
}
