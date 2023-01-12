#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

vector<pair<pair<int,int>,pair<int,string>>> v;
int N;


int main(void)
{
    u
    cin >> N;
    for(int i = 1; i <= N; i++){
        string s;
        int d, m, y;
        cin >> s >> d >> m >> y;
        v.pb({{y, m},{d, s}});
    }
    sort(v.begin(),v.end());
    cout << v[v.size()-1].second.second  << "\n" << v[0].second.second << "\n";
}