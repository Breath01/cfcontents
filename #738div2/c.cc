#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;

const ll INF = 1e9 + 7;
const ll mod = 1e9 + 7;

int a[10005];
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
        bool ok = false;
        if (a[n - 1] == 0) {
            for (int i = 0; i < n + 1; ++i) {
                cout << i + 1 << " ";
            }
            cout << endl;
            ok = true;
        } else {
            if (a[0] == 1) {
                cout << n + 1 << " ";
                for (int i = 0; i < n; ++i) {
                    cout << i + 1 << " ";
                }
                cout << endl;
                ok = true;
            } else {
                for (int i = 0; i < n - 1; ++i) {
                    if (ok) break;
                    if (a[i] == 0 && a[i + 1] == 1) {
                        for (int j = 0; j <= i; ++j) {
                            cout << j + 1 << " ";
                        }
                        cout << n + 1 << " ";
                        for (int j = i + 1; j < n; ++j) {
                            cout << j + 1 << " ";
                        }
                        cout << endl;
                        ok = true;
                    }
                }
            }
            
        }
        if (!ok) cout << -1 << endl;
    }
    return 0;
}