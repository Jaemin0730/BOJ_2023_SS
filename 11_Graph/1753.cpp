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
#define INF 987654321

int v, e, s;    // 정점개수, 간선개수, 시작점
int D[MAX];     // 해당 정점으로 가는 비용의 값을 저장하는 배열
vector<pii> V[MAX];
priority_queue<pii> pq;

// 다익스트라 알고리즘 함수!
void DIJKSTRA(int s) {
    D[s] = 0;
    pq.push({0, s});
    while (!pq.empty()) {
        // 비용을 음수로 지정하는 이유는?
        // -> 우선순위 큐는 큰 값을 top으로 설정하기 때문에, 
        //    값들을 음수로 지정해서 가장 작은 비용을 위로 보내려고!
        int now = pq.top().second;       // 현재 노드
        int cost = -pq.top().first;    // 현재 노드까지 비용
        pq.pop();
        if (D[now] < cost) {
            continue;
        }
        for (int i=0; i<V[now].size(); i++) {
            int next = V[now][i].second;        // 다음 노드
            int ncost = cost + V[now][i].first; // 현재 노드까지 비용 + 다음 노드까지 가는 비용의 합
            if (D[next] > ncost) {
                D[next] = ncost;
                pq.push({-ncost, next});
            }
        }
    }   
}

int main(void)
{
    u
    cin >> v >> e >> s;
    for (int i=1; i<=v; i++) {
        D[i] = INF;
    }
    for (int i=0; i< e; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        V[a].pb({c, b});
    }
    // 다익스트라 알고리즘 사용
    DIJKSTRA(s);
    for (int i=1; i<=v; i++){
        if (D[i] == INF) {
            cout << "INF" << " ";    
        }
        else {
            cout << D[i] << " ";
        }
    }
}