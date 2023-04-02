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
    vector<int> v;
    for (int i=0; i<3; i++) {
        int a;
        cin >> a;
        v.pb(a);
    }
    sort(v.begin(), v.end());
    cout << v[1];
}