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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int mil = n / 2;
        if (s[n - 1] == '0') {
            cout << 1 << " " << n << " " << 1 << " " << n - 1 << endl;
        } else {
            int t = n;
            while (s[t - 1] == '1') {
                --t;
            }
            if (t - 1 >= mil) {
                cout << 1 <<  " " << t << " " << 1 << " " << t - 1 << endl;
            } else {
                int n1 = n - t;
            }
        }
    }
    return 0;
}