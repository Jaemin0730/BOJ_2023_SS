#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int n, s, m;
int dp[101][1001];
int v[101];

int main(void)
{
    u
    cin >> n >> s >> m;
	for (int i = 1; i <= n; i++) {
		cin >> v[i];
	}
    dp[0][s] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			if (dp[i - 1][j] == 1) {
				if (j + v[i] <= m) {
                    dp[i][j + v[i]] = 1;
                }
				if (j - v[i] >= 0) {
                    dp[i][j - v[i]] = 1;
                }
			}
		}
	}
    for (int i = m; i >= 0; i--) {
		if (dp[n][i] == 1) {
			cout << i;
			return 0;
		}
	}
	cout << -1;
}