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
    ll num;
    ll result = 0;
    cin >> num;
    for (ll i = 1; i < num; i++) {
        result += (num + 1) * i;
    }
    cout << result;
}