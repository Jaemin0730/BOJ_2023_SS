#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

#define MAX 501

int n, m, sol = 0;
bool v[MAX][MAX] = {};

int main(void)
{
    u
    cin >> n >> m;
    for (int i=0; i<m; i++) {
        int a, b;   // a학생보다 b학생의 키가 더 크다!
        cin >> a >> b;
        v[a][b] = true;
    }
    // 플로이드-와샬 알고리즘 사용!
    for (int k=1; k<=n; k++) {
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++) {
                if (v[i][k] && v[k][j]) {
                    v[i][j] = true;
                }
            }
        }
    }
    // 몇번째인지 알 수 있는 학생의 수 출력하기 -> sol 출력
    for (int i=1; i<=n; i++) {
        int cnt = 0;    // 1~n까지 자기보다 크거나 작은사람이 있는 경우를 모두 cnt에 더해준다 
        for (int j=1; j<=n; j++) {
            if (v[i][j] || v[j][i]) {   
            // v[i][j] = true : i가 j보다 작다, v[j][i] = true : j가 i보다 작다
            // i, j가 서로 크거나 작은게 true -> 자기보다 키가 크거나 작은사람이 있는 경우!
            // 따라서 이러한 경우에는 cnt를 1 더해준다!
                cnt++;
            }
        }
        if (cnt == n-1) {   
        // cnt가 전체 학생의 수 - 1(자기 자신은 제외)인 경우는 자기 자신의 순서를 아는 경우니까 sol을 1 더해준다!
            sol++;
        }
    }
    cout << sol;
} 