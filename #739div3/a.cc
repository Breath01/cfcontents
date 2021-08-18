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
    int j = 0;
    for (int i = 1; i < 100000; ++i) {
        if (i % 3 == 0) continue;
        else if (i % 10 == 3) continue;
        else a[++j] = i;
    }
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        cout << a[k] << endl;
    }
    return 0;
}