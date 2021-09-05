#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;

const ll kinf = 1e9 + 7;
const ll kmod = 1e9 + 7;

const ll ksz = 2e6 + 7;

ll a[ksz];

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    if (n % 2 == 1) {
        --n;
    }
    ll res = 0;
    for (int i = 1; i <= n; i += 2) {
        ll mn = a[i];
        ll cur = a[i];
        for (int j = i + 1; j <= n; ++j) {
            if (j % 2 == 1) {
                cur += a[j];
            } else {
                ll l = max(0LL, cur - a[j]);
                ll r = min(mn, a[i] - 1);
                if (l <= r) {
                    res += r - l + 1;
                }
                cur -= a[j];
                mn = min(mn, cur);
            }
        }
    }
    cout << res << "\n";
    return 0;
}