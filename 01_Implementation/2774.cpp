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
    char a[11];
    int t, s[11];
    cin >> t;
    while (t--) {
        int cnt = 0;
        for (int i = 0; i < 11; i++) {
            a[i] = '0';
            s[i] = 0;
        }
        cin >> a;
        for (int i = 0; i < strlen(a); i++) {
            s[a[i] - '0']++;
        }
        for (int i = 0; i < 10; i++) {
            if (s[i] > 0) {
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
}