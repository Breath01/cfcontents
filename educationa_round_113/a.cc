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
        int cnt = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'a') {
                ++cnt;
            }
        }
        int rem = s.size() - cnt;
        if (cnt == 0 || cnt == s.size()) {
            cout << -1 << " " << -1 << endl;
        } else {
            for (int i = 0; i < s.size(); ++i) {
                if (s[i] == 'b' && s[i + 1] == 'a') {
                    cout << i + 1 << " " << i + 2 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}