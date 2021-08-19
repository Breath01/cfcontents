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
        string n;
        int k;
        cin >> n >> k;
        while (true) {
            set<char> st(n.begin(), n.end());
            if (st.size() <= k) {
                cout << n << endl;
                break;
            }
            st.clear();
            int p = 0;
            for ( ; ; ++p) {
                st.insert(n[p]);
                if (st.size() > k) {
                    while (n[p] == '9') {
                        --p;
                    }
                    ++n[p];
                    for (int i = p + 1; i < n.size(); ++i) {
                        n[i] = '0';
                    }
                    break;
                }
            }
        }
    }
    return 0;
}