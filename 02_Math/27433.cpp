#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

ll n;
ll sol = 1;

int main(void)
{
    u
    cin >> n;
	for (ll i = 2; i <= n; i++) {
        sol *= i;
    }
	cout << sol;
}