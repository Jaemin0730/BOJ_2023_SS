#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int r, c, t = 0, cnt = 0;   // t: 걸리는 시간, cnt: 남은 치즈 개수
int V[101][101];            // 맵
bool tf[101][101];       // 해당 칸의 방문 여부
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
queue<pii> q;
queue<pii> temp;

void BFS(){
    tf[0][0] = true;
    q.push({0, 0});
    while (!q.empty()){
        cnt = q.size(); 
        while (!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for (int i = 0; i < 4;i++){
                int nx = x + dx[i];
                int ny = y + dy[i];
                if (nx >= 0 && nx < c && ny >=0 && ny <r){
                    if(!tf[ny][nx] && V[ny][nx] == 1) {
                        temp.push({nx, ny}); 
                    }
                    else if (!tf[ny][nx] && V[ny][nx] == 0) {
                        q.push({nx, ny});
                    }
                    tf[ny][nx] = true;
                }
            }
        }
        while (!temp.empty()) {
            q.push(temp.front());
            temp.pop();
        }
        t++;
    }   
}

int main(void)
{
    u
    cin >> r >> c;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> V[i][j];
        }
    }
    BFS();
    cout << t - 1 << "\n" << cnt << "\n";
}