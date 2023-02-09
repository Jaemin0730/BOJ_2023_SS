#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

#define INF 987654321

int n, m;
int v[101][101] = {};

int main(void)
{
    u
    cin >> n >> m;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (i == j) {
                v[i][j] = 0;
            }
            else {
                v[i][j] = INF;
            }
        }
    }
    while (m--) {
        int a, b, c;    // a:시작, b:끝, c: 값
        cin >> a >> b >> c;
        v[a][b] = min(v[a][b], c);
    }
    // 플로이드-와샬 알고리즘 사용!
    for (int k=1; k<=n; k++) {
		for (int i=1; i<=n ; i++) {
			for (int j=1; j <= n; j++) {
				v[i][j] = min(v[i][j], (v[i][k] + v[k][j]));
			}
		}
	}
    // 값들 출력하기!
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (v[i][j] == INF) {
                cout << "0 ";
                continue;
            }
            else {
                cout << v[i][j] <<" ";
            }
        }
        cout << "\n";
    }
}