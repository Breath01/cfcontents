#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;

const ll kinf = 1e9 + 7;
const ll kmod = 1e9 + 7;

const ll ksz = 2e6 + 7;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int c, d;
        cin >> c >> d;
        if (c == d && c == 0) {
            cout << 0 << endl;
        } else if (c == d && c != 0) {
            cout << 1 << endl;    
        } else {
            if (abs(c - d) % 2 == 1) {
                cout << -1 << endl;
            } else {
                cout << 2 << endl;
            }
        }
    }
    return 0;
}