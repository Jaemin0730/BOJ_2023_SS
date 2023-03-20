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
#define MAX 101

int n, m, r, sol = -1, t, a, b, l, cnt;
int arr[MAX][MAX];
int k[MAX];         // 노드마다 보유한 아이템 수

int main(void)
{
    u
    cin >> n >> m >> r;
    for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i != j) {
                arr[i][j] = INF;
            }
		}
    }
    for (int i = 1; i <= n; i++) {
        cin >> k[i];
    }
    // 입력 받은 값들은 길이 있음을 표시
    for (int i = 0; i < r; i++) {
		cin >> a >> b >> l;
		arr[a][b] = l;
		arr[b][a] = l;
	}
    // 플로이드-와샬 알고리즘 사용
    for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (arr[i][k] + arr[k][j] < arr[i][j]) {
					arr[i][j] = arr[i][k] + arr[k][j];
                }
			}
        }
    }
    for (int i = 1; i <= n; i++) {
		cnt = k[i];
		for (int j = 0; j <= n; j++) {
			// 수색가능한 범위의 아이템 파밍!!
			if (i != j && arr[i][j] <= m) {
                cnt += k[j];
            }
		}
		sol = max(sol, cnt);
	}
	cout << sol;
}