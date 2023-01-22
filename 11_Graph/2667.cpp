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
string s[26] = {};
bool visited[26][26];
int cnt = 0;
queue<pii> q;
int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};
vector<int> v;

void BFS(int x, int y) {
	cnt = 0;
	visited[x][y] = true;
	cnt++;
	q.push({x, y});
	while (!q.empty()) {
		int xx = q.front().first;
		int yy = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = xx + dx[i];
			int ny = yy + dy[i];
			if (0 <= nx && nx < n && 0 <= ny && ny < n && !visited[nx][ny] && s[nx][ny] == '1') {
				visited[nx][ny] = true;
				q.push({nx, ny});
				cnt++;
			}
		}
	}
}

int main(void)
{
    u
    cin >> n;
	for (int i=0; i<n; i++) {
		cin >> s[i];   
	}
	for (int i=0; i<n; i++){            
        for (int j=0; j<n; j++){        
            if (s[i][j] == '1' && visited[i][j] == false) {
				BFS(i, j);
				v.pb(cnt);
			}
        }
    }
	sort(v.begin(), v.end());
	cout << v.size() << "\n";
	for (int i=0; i<v.size(); i++) {
		cout << v[i] << "\n";
	}
}