#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

ll gcd(ll x, ll y) {
	if (y == 0) return x;
	return gcd(y, x % y);
}

ll lcm(ll x, ll y, ll GCD) {
	return x * y / GCD;
}

int main(void)
{
    u
    int t;
	cin >> t;
	while (t--) {
		ll a, b;
		cin >> a >> b;
		cout <<  lcm(a, b, gcd(a,b)) << "\n";
	}
}