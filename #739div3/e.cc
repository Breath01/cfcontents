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
        set<char> st;
        map<char, int> m;
        for (int i = 0; i < s.size(); ++i) {
            st.insert(s[i]);
            ++m[s[i]];
        }
        vector<char> seq;
        set<char> test;
        for (int i = s.size() - 1; i >= 0; --i) {
            if (i == s.size() - 1) {
                seq.push_back(s[i]);
                test.insert(s[i]);
                continue;
            }
            if (test.find(s[i]) == test.end()) {
                seq.push_back(s[i]);
                test.insert(s[i]);
            }
        }
        reverse(seq.begin(), seq.end());
        int n = 0;
        bool ok = true;
        for (int i = 0; i < seq.size(); ++i) {
            if (m[seq[i]] % (i + 1) != 0 || m[seq[i]] == 0) {
                ok = false;
                break;
            } else {
                n +=  m[seq[i]] / (i + 1);
            }
        }
        if (ok) {
            string tar = s.substr(0, n);
            string tmp = tar;
            for (int i = 0; i < seq.size(); ++i) {
                string temp = "";
                for (int j = 0; j < tmp.size(); ++j) {
                    if (tmp[j] != seq[i]) {
                        temp += tmp[j];
                    }
                }
                tmp = temp;
                tar += tmp;
                if (tar != s.substr(0, tar.size())) {
                    ok = false;
                    break;
                }
            }
        }
        if (ok) {
            cout << s.substr(0, n) << " ";
            for (auto x : seq) cout << x;
            cout << endl;
        } else cout << -1 << endl;
    }
    return 0;
}  