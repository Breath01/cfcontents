#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;

const ll kinf = 1e9 + 7;
const ll kmod = 1e9 + 7;

const ll ksz = 2e6 + 7;

int x[ksz], y[ksz];
int p[ksz][2];

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        for (int i = 0; i < n; ++i) {
            cin >> x[i];
        }
        for (int i = 0; i < m; ++i) {
            cin >> y[i];
        }
        for (int i = 0; i <k; ++i) {
            cin >> p[i][0] >> p[i][1];
        }
    }
    return 0;
}