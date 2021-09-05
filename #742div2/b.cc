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
        int a, b;
        cin >> a >> b;
        int res = a;
        int tmp = 0;
        int t = (a - 1) & 3;
        if (t == 0) {
            tmp = a - 1;
        } else if (t == 1) {
            tmp = 1;
        } else if (t == 2) {
            tmp = a;
        } else {
            tmp = 0;
        }
        if (tmp == b) {
            cout << res << endl;
        } else {
            int c = tmp ^ b;
            if (c == a) {
                cout << res + 2 << endl;
            } else {
                cout << res + 1 << endl;
            }
        }
    }
    return 0;
}