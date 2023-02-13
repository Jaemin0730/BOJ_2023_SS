#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int n, k;

int main(void)
{
    u
    cin >> n >> k;
    int sol = 0;
    for(int i=1; i<=k; i++)
    {
        string s = to_string((i*n));
        reverse(s.begin(),s.end());
        int tmp = stoi(s);
        sol = max(sol,tmp);
    }
    cout << sol;
}