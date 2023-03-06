#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

ll dp[1001][10]; // 앞: 자릿수, 뒤: 0~9!!
#define MAX 10007

int main(void)
{
    u
    int n;
	cin >> n;
	for (int i = 0; i < 10; i++) {
		dp[1][i] = 1;
	}
	for (int i = 2; i <= n; i++) {
		ll a = 0;
		for (int j = 0; j < 10; j++) {
			for (int k = j; k < 10; k++) {
				dp[i][j] += dp[i - 1][k];
				dp[i][j] %= MAX;
			}
			if (i == n) {
				a += dp[i][j];
			}
		}
		if (i == n) {
			cout << a % MAX;
			return 0;
		}
	}
	cout << 10;
}