#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int n, m;
int a[101][101];

int main(void)
{
    u
    cin >> n >> m;
    for (int i=0; i<m; i++) {
        int x, y;
        cin >> x >> y;
        // 비교 결과를 x > y 인경우 1로 표시해준다!
        a[x][y] = 1;
    }
    for (int k=1; k<=n; k++){           // 중간값
        for (int i=1; i<=n; i++){       // 처음값
            for (int j=1; j<=n; j++){   // 끝값
                if (a[i][k] == 1 && a[k][j] == 1 && a[i][k] != 0) {
                    a[i][j] = a[i][k];
                }
            }
        }
    }
    
    for (int i = 1; i <= n; i++) {
		int cnt = 0;
		for (int j = 1; j <= n; j++) {
			if (i == j) {
                continue;
            }
			if (a[i][j] == 0 && a[j][i]==0) {   // i > j, j > i를 알 수 없는 경우!
                cnt++;
            }
        }		
		cout << cnt << "\n";
	}
}