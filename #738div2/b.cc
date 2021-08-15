#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;

const ll INF = 1e9 + 7;
const ll mod = 1e9 + 7;

char a[1005];

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int j = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] == '?') continue;
            else {
                j = i;
                break;
            }
        }
        for (int i = j; i < n; ++i) {
            if (a[i] == '?') {
                if (a[i - 1] == 'R') {
                    a[i] = 'B';
                } else {
                    a[i] = 'R';
                }
            }
        }
        for(int i = j; i >= 0; --i) {
            if (a[i] == '?') {
                if (a[i + 1] == 'R') {
                    a[i] = 'B';
                } else {
                    a[i] = 'R';
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}