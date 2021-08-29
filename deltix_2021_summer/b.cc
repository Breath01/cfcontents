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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int odd = 0;
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
            if (a[i] % 2 == 1) {
                ++odd;
            }
        }
        int mid = (n + 1) / 2;
        if (odd > mid || (n - odd) > mid) {
            cout << -1 << endl;
        } else {
            int res = 0;
            int j = 1;
            int tmp = 0;
            for (int i = 1; i <= n; ++i) {
                if (a[i] % 2 == 0) {
                    tmp += abs(i - j);
                    j += 2;
                }
                if (j > n) {
                    break;
                }
            }
            j = 1;
            for (int i = 1; i <= n; ++i) {
                if (a[i] % 2 == 1) {
                    res += abs(i - j);
                    j += 2;
                }
                if (j > n) {
                    break;
                }
            }
            if (n % 2 == 1) {
                if (odd > (n - odd)) {
                    res = res;
                } else {
                    res = tmp;
                }
            } else {
                res = min(tmp, res);
            }
            cout << res << endl;
        }
    }
    return 0;
}