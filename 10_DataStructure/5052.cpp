#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;



int main(void)
{
    u
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> v;
        bool tf = true;
        for (int i=0; i<n; i++) {
            string s;
            cin >> s;
            v.pb(s);
        }
        sort(v.begin(), v.end());
        for (int i=0; i<v.size()-1; i++) {
            string a = v[i];
            string b = v[i + 1];
            if (a.length() > b.length()) {
                continue;
            }
            if (a == b.substr(0, a.length())) {
                tf = false;
                break;
            }
        }
        if (tf) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}