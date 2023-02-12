#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

#define MAX 20001
vector<int> vt[MAX];    // 정점 저장
int VisiT[MAX] = {};       // 이분그래프 확인 -> 1:빨강, 2:파랑
#define Red 1
#define Blue 2
int t, v, e;

void BFS(int x) {
    queue<int> q;
    VisiT[x] = Red;
    q.push(x);
    while (!q.empty()) {
        int now = q.front();   // now는 현재 노드 번호
        q.pop();
        for (int i=0; i<vt[now].size(); i++) {  // 현재 노드와 연결된 다른 노드들을 탐색하기 위해
            if (VisiT[vt[now][i]] == 0) {       // 현재 노드와 연결된 다른 노드가 방문 X인 경우
                q.push(vt[now][i]);
                // 현재노드가 파란색이면 연결된 노드를 빨간색으로, 빨간색이면 연결된 노드를 파란색으로 칠해주자!
                if (VisiT[now] == Red) {
                    VisiT[vt[now][i]] = Blue;
                }
                else if (VisiT[now] == Blue) {
                    VisiT[vt[now][i]] = Red;
                }
            }
        }
    }
}

bool TF() {
    for (int i=1; i<=v; i++) {
        for (int j=0; j<vt[i].size(); j++) {
            if (VisiT[i] == VisiT[vt[i][j]]) {  // 자신의 노드와 자신과 연결된 노드의 색이 같은지 확인
                return false;
            }
        }
    }
    return true;
}

int main(void)
{
    u
    cin >> t;
    while (t--) {
        // 여러번 반복하니까 초기화!!
        memset(vt, 0, sizeof(vt));
        memset(VisiT, 0, sizeof(VisiT));
        cin >> v >> e;
        for (int i=0; i<e; i++) {
            int a, b;
            cin >> a >> b;
            vt[a].pb(b);
            vt[b].pb(a);
        }
        // 정점들을 방문하며 탐색하기 -> BFS 사용
        for (int i=1; i<=v; i++) {
            if (VisiT[i] == 0) {    // 방문 X인 경우에
                BFS(i);
            }
        }
        // 탐색된 그래프가 이분그래프인지 확인
        bool tf = TF();
        if (tf) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}