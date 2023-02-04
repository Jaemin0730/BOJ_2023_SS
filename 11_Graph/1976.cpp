#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int v[201];  // 부모 도시
int y[1001];  // 해당 길의 값

int FIND(int k) {
    if (v[k] == k) {
        return k;
    }
    else {
        return v[k] = FIND(v[k]);
    }
}

void UNION(int a, int b) {
    int A = FIND(a);
    int B = FIND(b);
    v[A] = B;
}

int main(void)
{
    u
    int n, m;
    bool tf = true;
    cin >> n >> m;
    for (int i=1; i<=n; i++) {
        v[i] = i;
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            int x;
            cin >> x;
            if (x == 1) {
                UNION(i, j);
            }
        }
    }
    for (int i=0; i<m; i++) {
        cin >> y[i];
    }
    int r = FIND(y[0]);         // 맨 위(뿌리)의 값
    for (int i=1; i<m; i++) {   // 뿌리 다음부터 M까지 FIND함수로 확인하기
        if (r != FIND(y[i])) {  // 만약 FIND함수 실패 시 -> 거짓!!
            tf = false;
            break;
        }
    }
    if (tf) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}