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
        int k;
        cin >> k;
        string s;
        cin >> s;
        set<char> st{'2', '3', '5', '7'};
        bool ok = false;
        for (int i = 0; i < s.size(); ++i) {
            if (st.find(s[i]) == st.end()) {
                cout << 1 << endl;
                cout << s[i] << endl;
                ok = true;
                break;
            }
        }
        if (ok) {
            continue;
        } else {
            int n = s.size();
            if (s[n - 1] == '2') {
                cout << 2 << endl;
                cout << s[0] << s[n - 1] << endl;
            } else if (s[n - 1] == '5') {
                cout << 2 << endl;
                cout << s[0] << s[n - 1] << endl;
            } else if (s[n - 1] == '7') {
                map<char, int> m;
                for (int i = 0; i < n - 1; ++i) {
                    ++m[s[i]];
                }
                if (m['2']) {
                    cout << 2 << endl;
                    cout << 27 << endl;
                } else if (m['5']) {
                    cout << 2 << endl;
                    cout << 57 << endl;
                } else if (m['7']) {
                    cout << 2 << endl;
                    cout << 77 << endl;
                } else {
                    cout << 2 << endl;
                    cout << 33 << endl;
                }
            } else {
                int t = n;
                while (s[n - 1] == '3') {
                    --n;
                }
                if (t - n >= 2) {
                    cout << 2 << endl;
                    cout << 33 << endl;
                } else {
                    if (s[n - 1] == '2') {
                        cout << 2 << endl;
                        cout << s[0] << s[n - 1] << endl;
                    } else if (s[n - 1] == '5') {
                        cout << 2 << endl;
                        cout << s[0] << s[n - 1] << endl;
                    } else if (s[n - 1] == '7') {
                        map<char, int> m;
                        for (int i = 0; i < n - 1; ++i) {
                            ++m[s[i]];
                        }
                        if (m['2']) {
                            cout << 2 << endl;
                            cout << 27 << endl;
                        } else if (m['5']) {
                            cout << 2 << endl;
                            cout << 57 << endl;
                        } else if (m['7']) {
                            cout << 2 << endl;
                            cout << 77 << endl;
                        } else {
                            cout << 2 << endl;
                            cout << 33 << endl;
                        }
                    }
                }
            }
        }
    }
    return 0;
}