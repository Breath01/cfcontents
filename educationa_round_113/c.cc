#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;

const ll kinf = 1e9 + 7;
const ll kmod = 998244353;

const ll ksz = 2e6 + 7;

int a[ksz];

ll fact(int n) {
    if (n == 1) return 1;
    return n * fact(n - 1) % kmod;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a, a + n);
        if (a[n - 1] == a[n - 2]) {
            cout << fact(n) << endl;
        } else if (a[n - 1] == a[n - 2] + 1) {
            int len = 0;
            for (int i = n - 2; i >= 0; --i) {
                if (a[i] == a[n - 2]) ++len;
            }
            ll res = len;
            res = res * fact(len) % kmod;
            for (int i = len + 1; i < n; ++i) {
                res = res * (i + 1) % kmod;
            }
            cout << res << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}