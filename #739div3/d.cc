#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;

const ll kinf = 1e9 + 7;
const ll kmod = 1e9 + 7;

const ll ksz = 2e6 + 7;

ll f[ksz];

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll i = 1;
    int j = 0;
    while (i < kinf * kinf) {
        f[j++] = i;
        i *= 2;
    }
    int t;
    cin >> t;
    while (t--) {
       int n;
       cin >> n;
       string s = to_string(n);
       int res = kinf;
       for (int i = 0; i < j; ++i) {
           string t = to_string(f[i]);
           int cur = 0;
           for (int k = 0; k < s.size(); ++k) {
               if (s[k] == t[cur]) {
                   ++cur;
               }
           }
           int tmp = 0;
           if (cur < t.size()) {
               tmp += t.size() - cur;
           }
           tmp += s.size() - cur;
           res = min(res, tmp);
       }
       cout << res << endl;
    }
    return 0;
}