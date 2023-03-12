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

ll dist[501];            // 해당 정점까지 걸린 시간
bool tf = false;         // 경로 존재 여부 -> 더이상 없으면 true!
vector<pii> v[501] = {}; // 정점

int main(void)
{
    u
    cin >> n >> m;
    for (int i=0; i<m; i++) {
        int a, b, c;
		cin >> a >> b >> c;
		v[a].push_back({b, c});
	}
    for (int i=1; i<=n; i++) {
        dist[i] = INF;
    }
    dist[1] = 0;   // 시작점은 0으로 초기화
    // 벨만 - 포드 알고리즘 시작
    // 참고 링크 -> m.blog.naver.com/kks227/220796963742
    for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) {
			for (int k=0; k<v[j].size(); k++) {
				int next = v[j][k].first;   // 다음 노드 번호
				int d = v[j][k].second;     // 다음 노드의 이동 시간
				if (dist[j] != INF && dist[next] > dist[j] + d) {
					dist[next] = dist[j] + d;
					if (i == n) {
                        tf = true;
                    }
				}
			}
		}
    }
    // 결과 출력
    if (tf) {
        cout << -1 << "\n";
    }
	else {
		for (int i = 2; i <= n; i++) {
			cout << (dist[i] != INF ? dist[i] : -1) << "\n";
        }
	}
}