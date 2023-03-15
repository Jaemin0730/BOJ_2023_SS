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
int a[9] = {};
vector<int> v;
bool tf[9] = {};

void RE(int k, int cnt) {
    if (m == cnt) {
        for (int i=0; i<m; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    else {
        int temp = 0;
        for (int i=k; i<v.size(); i++) {
            if (!tf[i] && v[i] != temp) {
                a[cnt] = v[i];
                temp = a[cnt];
                tf[i] = true;
                RE(i + 1, cnt + 1);
                tf[i] = false;
            }
        }
    }
}

int main(void)
{
    u
    cin >> n >> m;
    v.resize(n);
    for (int i=0; i<n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    RE(0, 0);
}