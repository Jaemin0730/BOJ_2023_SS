#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

vector<int> v;

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
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i=0; i<=n; i++) {
        v.pb(i);
    }
    int c, a, b;
    for (int i=0; i<m; i++) {
        scanf("%d %d %d", &c, &a, &b);
        if (c == 0) {
            UNION(a, b);
        }
        else {
            if (FIND(a) == FIND(b)) {
                printf("YES\n");
            }
            else {
                printf("NO\n");
            }
        }
    }
}