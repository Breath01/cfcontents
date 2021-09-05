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
        string res = "";
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'U') {
                res += 'D';
            }
            if (s[i] == 'D') {
                res += 'U';
            }
            if (s[i] == 'L') {
                res += 'L';
                res += 'R';
                ++i;
                continue;
            }
            if (s[i] == 'R') {
                res += "RL";
                ++i;
                continue;
            }
        }
        cout << res << endl;
    }
    return 0;
}