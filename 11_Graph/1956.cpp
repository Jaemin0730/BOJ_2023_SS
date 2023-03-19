#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

#define MAX 401
#define INF 987654321
int v, e, sol = INF;
int a[MAX][MAX];

int main(void)
{
    u
    cin >> v >> e;
    // 기본 세팅 -> 길 없음을 나타내도록 최대한 큰 수
    for (int i=1; i<=v; i++) {
        for (int j=1; j<=v; j++) {
            a[i][j] = INF;
        }
    }
    // 입력 받은 값들은 길이 있음을 표시
    for (int i=0; i<e; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        a[x][y] = z;
    }
    // 플로이드-와샬 알고리즘 사용
    for (int k=1; k<=v; k++) {                      // k = 거쳐가는 노드
        for (int i=1; i<=v; i++) {                  // i = 출발 노드
            for (int j=1; j<=v; j++) {              // j = 도착 노드
                if (a[i][j] > a[i][k] + a[k][j]) {  // 더 작은 값이 존재하는지
                    a[i][j] = a[i][k] + a[k][j];    // 더 작은 값으로 갱신
                    if (i == j) {
                        sol = min(sol, a[i][j]);
                    }
                }
            }
        }
    }
    //결과 출력
    if (sol == INF) {
        cout << -1;
    }
    else {
        cout << sol;
    }
}