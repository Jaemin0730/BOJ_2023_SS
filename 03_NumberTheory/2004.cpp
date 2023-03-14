#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

// 조합(C) 함수!
ll func2(ll N) {	// 2의 개수
	ll cnt = 0;
	for (ll i = 2; i <= N; i *= 2)
		cnt += N / i;
	return cnt;
}
ll func5(ll N) {	// 5의 개수
	ll cnt = 0;
	for (ll i = 5; i <= N; i *= 5)
		cnt += N / i;
	return cnt;
}

int main(void)
{
    u
    ll n, m;
	cin >> n >> m;
	cout << min(func5(n) - func5(m) - func5(n - m), func2(n) - func2(m) - func2(n - m));
}