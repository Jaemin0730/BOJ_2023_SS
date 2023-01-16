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
int MM[100][100] = {};
bool visited[100][100];
int cnt[100][100] = {};
queue<pair<int, int>> q;
int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};

void BFS(int x, int y) {
	visited[x][y] = true;
	cnt[x][y]++;
	q.push({x, y});
	while (!q.empty()) {
		int xx = q.front().first;
		int yy = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = xx + dx[i];
			int ny = yy + dy[i];
			if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny] && MM[nx][ny] == 1) {
				visited[nx][ny] = true;
				q.push({nx, ny});
				cnt[nx][ny] = cnt[xx][yy]+1;
			}
		}
	}
}

int main(void)
{
    u
    cin >> n >> m;
	for (int i=0; i<n; ++i){            
        string s;                    
        cin >> s;
        for (int j=0; j<m; ++j){        
            MM[i][j] = s[j]-'0';    
        }
    }
	BFS(0, 0);
	cout << cnt[n - 1][m - 1];
}