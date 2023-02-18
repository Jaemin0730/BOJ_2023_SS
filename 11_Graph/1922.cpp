#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

#define MAX 100001
int n, m;
vector<pii> v[MAX];
bool visited[MAX] = {};
priority_queue <pii, vector<pii>, greater<pii>> pq;

// 프림 알고리즘
int Prim() {
    int t = 0;  // 비용의 누적 합
	pq.push({0,1});
	for (int i=0; i<n; i++) {
		while (!pq.empty() && visited[pq.top().second]) {
			pq.pop();
		}
		int mc = pq.top().first;        // 최소비용
		int next = pq.top().second;     // 다음 노드의 번호
		visited[next] = true;           // 방문했으니까 방문여부를 true로!!
		t += mc;						// t(비용의 누적 합)에다가 최소비용을 누적해주자
		for (auto j : v[next]) {
			pq.push({j.second, j.first });
		}
	}
	return t;
}

int main(void)
{
    u
    cin >> n >> m;
    for (int i=0; i<m; i++) {
        int a, b, c;    // a:시작 , b:끝, c:비용
        cin >> a >> b >> c;
        v[a].pb({b, c});
        v[b].pb({a, c});
    }
    // 프림 알고리즘  사용
    cout << Prim();
}