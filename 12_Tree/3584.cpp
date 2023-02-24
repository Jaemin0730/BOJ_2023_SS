#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

#define MAX 10001

int node[MAX] = {};   // 노드 저장하는 배열
bool vt[MAX] = {};    // 방문 여부를 저장하는 배열
int t, n, x, y;

int main(void)
{
    u
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i=1; i<=n; i++) {
            node[i] = i;
            vt[i] = false;
        }
        for (int i=0; i<n-1; i++) {
            int a, b;
            cin >> a >> b;
            node[b] = a;
        }
        // LCA 찾기
        cin >> x >> y;
        vt[x] = true;
        // x부터 루트 노드까지 올라가면서 방문 여부를 true로 바꿔준다!
        while (x != node[x]) {
            x = node[x];
            vt[x] = true;
        }
        // y부터 루트 노드까지 올라가면서 방문 여부를 확인하는데,
        // 이미 true인 경우 (x가 이미 방문함) -> 최소 공통 조상!
        while (1) {
            if (vt[y]) {
                cout << y << "\n";
                break;
            }
            y = node[y];
        } 
    }
}