#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

#define MAX 1010
#define INF 987654321

int n, m, a, b; // a: 시작, b: 끝
int d[MAX];     // 최소 거리
int r[MAX];     // 해당 도시 번호를 오기 전의 도시 번호를 표시해줌
vector<pii> v[MAX];
vector<int> pn; // 출발 번호를 표시해줌

int main(void)
{
    u
    cin >> n >> m;
    for (int i=1; i<=n; i++) {
        d[i] = INF;
    }
    for (int i=0; i<m; i++) {
        int x, y, z;    // x:시작, y:끝, z:비용
        cin >> x >> y >> z;
        v[x].pb({y, z});
    }
    cin >> a >> b;
    // 다익스트라 알고리즘 사용
    priority_queue<pii> pq; // (비용, 번호)
    pq.push({0, a});
    d[a] = 0;
    while (!pq.empty()) {
        int cost = -pq.top().fst;   // 현재 비용
        int cur = pq.top().snd;      // 현재 위치
        pq.pop();
        // 시간초과 떠서 필요없는 과정은 걸러주고자 한다!
        if (cost > d[cur]) {
            continue;
        }
        for (int i = 0; i < v[cur].size(); i++) {
            int next = v[cur][i].fst;
            int ncost = v[cur][i].snd;
            if (d[next] > cost + ncost) {
                r[next] = cur;
                d[next] = cost + ncost;
                pq.push(make_pair(-d[next], next));
            }
        }
    }
    // pn -> 어디서부터 출발했는지 확인해주는 vector
    // pn[b]: 끝의 번호에서부터 처음 번호까지 역으로 진행하는 과정이 while()문이다!
    pn.pb(b);
    int k = r[b];
    while (k) {
        pn.pb(k);
        k = r[k];
    }
    cout << d[b] << "\n";
    cout << pn.size() << "\n";
    for (int i = pn.size() - 1; i >= 0; i--) {
        cout << pn[i] << " ";
    }
}