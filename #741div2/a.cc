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
        ll l, r;
        cin >> l >> r;
        if (r < 2 * l - 1) {
            cout << r % l << endl;
        } else {
            cout << (r + 1) / 2 - 1 << endl;
        }
    }
    return 0;
}