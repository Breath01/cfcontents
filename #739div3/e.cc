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
        string tt;
        cin >> tt;
        vector<char> seq;
        map<char, int> m;
        set<char> s;
        for (int i = 0; i < tt.size(); ++i) {
            s.insert(tt[i]);
            ++m[tt[i]];
        }
        set<char> ss;
        for (int i = tt.size() - 1; i >= 0; --i) {
            if (i == tt.size() - 1) {
                seq.push_back(tt[i]);
                ss.insert(tt[i]);
            }
            if (ss.find(tt[i]) == ss.end()) {
                seq.push_back(tt[i]);
                ss.insert(tt[i]);
            }
        }
        reverse(seq.begin(), seq.end());
        int n = 0;
        for (int i = 0; i < seq.size(); ++i) {
            n += m[seq[i]] / (i + 1);
        }
        bool ok = true;
        if (((1 + seq.size()) * seq.size() / 2) > tt.size()) {
            ok = false;
        }
        set<char> test;
        string tar = tt.substr(0, n);
        for (int i = 0; i < tar.size(); ++i) {
            test.insert(tar[i]);
        }
        if (test.size() != s.size()) {
            ok = false;
        }
        if (ok) {
            
            string tmp = tar;
            int len = tar.size();
            for (int i = 0; i < seq.size(); ++i) {
                string temp = "";
                for (int j = 0; j < tmp.size(); ++j) {
                    if (tmp[j] != seq[i]) {
                        temp += tmp[j];
                    }
                }
                tmp = temp;
                tar += tmp;
                len += tmp.size();
                if (len > tt.size()) {
                    ok = false;
                    break;
                }
                if (tar != tt.substr(0, len)) {
                    ok = false;
                    break;
                }
            }
        }
        if (ok) {
            cout << tt.substr(0, n) << " ";
            for (int i = 0; i < seq.size(); ++i) {
                cout << seq[i];
            }
            cout << endl;
        } else cout << -1 << endl;
    }
    return 0;
}