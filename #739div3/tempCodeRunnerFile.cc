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
        int n, k;
        cin >> n >> k;
        string s = to_string(n);
        set<char> st;
        for (int i = 0; i < s.size(); ++i) {
            st.insert(s[i]);
        }
        if (st.size() <= k) {
            cout << n << endl;
        } else {
            string ans = "";
            if (k == 1) {
                for (int i = 0; i < s.size(); ++i) {
                    ans += s[0];
                }
                cout << ans << endl;
            } else {
                int i;
                for (i = 0; s[i] == s[i + 1]; ++i) {
                    ans += s[i];
                }
                if (s[i] > s[i + 1]) {
                    ans += s[0];
                    for (int j = i + 1; j < s.size(); ++j) {
                        ans += s[i + 1];
                    }
                    cout << ans << endl;
                } else {
                    ans += s[i];
                    if (++st.find(s[i + 1]) == st.end()) {
                        for (int j = i + 1; j < s.size(); ++j) {
                            ans += s[i + 1];
                        }
                        cout << ans << endl;
                    } else {
                        ans += *(++st.find(s[i + 1]));
                        for (int j = i + 2; j < s.size(); ++j) {
                            ans += s[0];
                        }
                        cout << ans << endl;
                    }
                }
            }
        }
    }
    return 0;
}