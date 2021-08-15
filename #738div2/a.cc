#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;

const ll INF = 1e9 + 7;
const ll mod = 1e9 + 7;

int a[1005];

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mx = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        int res;
        for (int i = 0; i < n; ++i) {
            if (i == 0) res = a[i];
            else res = (res & a[i]);
        }
        cout << (res & mx) << endl;
    }
    return 0;
}