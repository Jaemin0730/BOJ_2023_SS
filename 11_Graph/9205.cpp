#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

vector<pii> V;          // 전체 좌표(지도)
vector<bool> visitt;    // 방문여부 
pair<int, int> R;       // 락 축제
int sy, sx;             // sy:시작하는 y, sx:시작하는 x

void DFS() {
	queue<pii> q;
	q.push({sy, sx});
	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		if (abs(y - R.first) + abs(x - R.second) <= 1000) {
			cout << "happy";
			return;
		}
		else {
			for (int i = 0; i < V.size(); ++i) {
				if (abs(y - V[i].first) + abs(x - V[i].second) <= 1000) {
					if (!visitt[i]) {
						visitt[i] = true;
						q.push({V[i].first, V[i].second});
					}
				}
			}
		}
	}
	cout << "sad";
}

int main(void)
{
    u
    int t;
	cin >> t;
	while (t--) {
        int n;
		cin >> n;
		V = vector<pii>(n, {0,0});
		visitt = vector<bool>(n, false);
		cin >> sy >> sx;
		for (int i = 0; i < n; i++) {
			cin >> V[i].first >> V[i].second;
		}
		cin >> R.first >> R.second;
		DFS();
		cout << "\n";
	}
}