#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

bool P(int i) {	// 소수 체크
	int r;
	r = sqrt(i);
	if (r == 1 && i != 1) {	// 2,3
		return true;
	}
	if (i % 2) {			// 홀수
		for (int j = 2; j <= r; j++) {
			if (!(i%j))
				return false;
			if (j == r) {
				return true;
			}
		}
	}
}

int main(void)
{
    u
    int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = n / 2; i >= 2; i--) {
			if (P(i) && P(n - i)) {
				cout << i << " " << n - i << '\n';
				break;
			}
		}
	}
}