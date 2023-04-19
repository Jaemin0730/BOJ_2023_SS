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
    int t;
	cin >> t;
	while (t--) {
		ll a, b, c;
		cin >> a >> b >> c;
		ll big = max(a, b);
		ll mbig = max(big, c);
		ll sum = 0;
		if (mbig == a) {
			sum = b + c;
		}
		else if (mbig == b) {
			sum = a + c;
		}
		else {
			sum = a + b;
		}
		cout << mbig * mbig + sum * sum << "\n";
	}
}