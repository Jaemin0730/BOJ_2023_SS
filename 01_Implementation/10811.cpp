#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;



int main(void)
{
    u
    int n, m;
    cin >> n >> m;
    vector<int> v;
    for (int i=0; i<n; i++) {
        v.pb(i + 1);
    }
    for (int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;
        reverse(&v[a-1], &v[b]);
    }
    for (int i=0; i<n; i++) {
        cout << v[i] << " ";
    }
}