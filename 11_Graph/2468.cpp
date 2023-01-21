#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int n;
int MM[103][103] = {};
bool visited[103][103];
int cnt[103][103] = {};
queue<pair<int, int>> q;
int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};

void BFS(int x, int y) {
	visited[x][y] = true;
	q.push({x, y});
	while (!q.empty()) {
		int xx = q.front().first;
		int yy = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = xx + dx[i];
			int ny = yy + dy[i];
			if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
				if (!visited[nx][ny]) {
                    visited[nx][ny] = true;
                    q.push({nx,ny});
                }
			}
		}
	}
}

int main(void)
{
    u
    cin >> n;
    int sol = 0;
	for (int i=0; i<n; ++i) {            
        for (int j=0; j<n; ++j) {        
            cin >> MM[i][j];   
        }
    }
    for (int k=0; k<=100; k++) { 
        int temp=0;
        for (int i=0; i<n; i++) { 
            for (int j=0; j<n; j++) {
                visited[i][j] = false;
            }
        }
        for (int i=0; i<n; i++) { 
            for (int j=0; j<n; j++) {
                if (MM[i][j] <= k) {
                    visited[i][j] = true;
                }
            }
        }
        
        for (int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if (!visited[i][j]) {
                    BFS(i,j);
                    temp++;
                }
            }
        }
        sol = max(sol, temp);
    }
	cout << sol;
}