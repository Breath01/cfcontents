#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;

const ll kinf = 1e9 + 7;
const ll kmod = 1e9 + 7;

const ll ksz = 2e6 + 7;

int a[ksz];

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    ll res = 0;
    if (n % 2 == 1) {
        --n;
    }
    ll rem = 0;
    int cnt = 0;
    for (int i = 1; i <= n; i += 2) {
        if (a[i] + rem >= a[i + 1]) {
            res += a[i + 1];
            ll tmp = rem + a[i] - a[i + 1];
            if (rem == 0 && tmp == 0) {
                res += cnt;
                ++cnt;
            } else if (rem == 0 && tmp > 0) {
                cnt = 0;
            } else if (rem > 0 && tmp == 0) {
                res += cnt;
                cnt = 1;
            }
            rem = tmp;
        } else {
            res += a[i];
            res += cnt;
            res += rem;
            cnt = 0;
            rem = 0;
        }
    }
    cout << res << endl;
    return 0;
}