#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int N, m, M, T, R, minute, p;

int main(void)
{
    u
    cin >> N >> m >> M >> T >> R;
	if (M - m < T) {
		cout << -1;
		return 0;
	}
	p = m;
	while (1) {
		if (p + T <= M) {
			p += T;
			N--;
		} 
        else {
			p -= R;
			if (p < m) {
                p = m;
            }
		}
		minute++; 
		if (N == 0) {
			cout << minute;
			return 0;
		}
	}
}