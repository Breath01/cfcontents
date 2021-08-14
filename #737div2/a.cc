#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;

double a[300005];

const int INF = 1e9 + 7;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        double sum = 0;
        double mx = -INF;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            mx = max(mx, a[i]);
            sum += a[i];
        }
        double ave = (sum - mx) / (n - 1);
        ave += mx;
        cout << setprecision(9) << ave << endl;
    }
}