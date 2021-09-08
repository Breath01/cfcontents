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
        string s;
        cin >> s;
        string s1, s2;
        s1 = s2 = "";
        for (int i = 0; i < s.size(); ++i) {
            if (i % 2 == 0) {
                s1 += s[i];
            } else {
                s2 += s[i];
            }
        }
        if (s2.empty()) {
            cout << stoi(s1) - 1 << endl;
        } else {
            cout << (stoi(s1) + 1) * (stoi(s2) + 1) - 2 << endl;
        }

    }
    return 0;
}