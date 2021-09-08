#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;

const ll kinf = 1e9 + 7;
const ll kmod = 1e9 + 7;

const ll ksz = 2e6 + 7;

int res[100][100];
char ans[100][100];

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
        memset(res, 0, sizeof(res));
        memset(ans, 0, sizeof(ans));
        int f = -1;
        int cur = -1;
        int cnt = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '2' && f == -1) {
                f = i;
                cur = i;
                ++cnt;
                continue;
            }
            if (s[i] == '2') {
                res[cur][i] = 1;
                res[i][cur] = -1;
                cur = i;
                ++cnt;
            }
        }
        if (f != -1) {
            res[cur][f] = 1;
            res[f][cur] = -1;
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i == j) {
                    ans[i][j] = 'X';
                    continue;
                }
                if (res[i][j] == 1) {
                    ans[i][j] = '+';
                } else if (res[i][j] == 0) {
                    ans[i][j] = '=';
                } else {
                    ans[i][j] = '-';
                }
            }
        }
        if (cnt == 1 || cnt == 2) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    cout << ans[i][j];
                }
                cout << endl;
            }
        }
    }
    return 0;
}