#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int n, p, t, cnt=1;
vector <int> v(1001); 


int main(void)
{
    u
    cin >> n >> p;
    t = n;
    while (!v[t]){
        v[t] = cnt++;
        t = t * n % p;
    }
    cout << cnt - v[t] << "\n";
}