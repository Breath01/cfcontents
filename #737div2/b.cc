#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;

int a[100005];

const int INF = 1e9 + 7;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int cnt = 1;
        int mx = a[0];
        int mi = a[0];
        for (int i = 1; i < n; ++i) {
            if (a[i] < a[i - 1]) {
                if (a[i] > mi) {
                    cnt += 2;
                } else {
                    ++cnt;
                }
                mi = mx = a[i];
            } else {
                mx = a[i];
            }
        }
        if (cnt <= k) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}