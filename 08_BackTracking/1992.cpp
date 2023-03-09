#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

string s[64];

void RE(int n, int x, int y) {
    char c = s[x][y];
    for (int i=x; i<x+n; i++) {
        for (int j=y; j<y+n; j++) {
            if (s[i][j] != c) {
                cout << "(";
				RE(n / 2, x, y);
				RE(n / 2, x, y + n / 2);
				RE(n / 2, x + n / 2, y);
				RE(n / 2, x + n / 2, y + n / 2);
				cout << ")";
				return;
            }
        }
    }
    cout << c;
}

int main(void)
{
    u
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> s[i];
    }
    // 분할정복 시작!
    RE(n, 0, 0);
}