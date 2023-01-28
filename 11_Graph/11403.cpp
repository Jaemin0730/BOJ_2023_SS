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
int v[100][100]= {};

int main(void)
{
    u
    cin >> n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> v[i][j];
        }
    }
    // 플로이드 알고리즘 사용!
    for (int k=0; k<n; k++) {           // 중간 노드
        for (int i=0; i<n; i++) {       // 시작 노드
            for (int j=0; j<n; j++) {   // 끝 노드
                if (v[i][k] == 1 && v[k][j] == 1) {
                    v[i][j] = 1;
                }
            }
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
}