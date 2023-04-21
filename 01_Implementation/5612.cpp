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
    int n, m;
	cin >> n >> m;
	int a, b;
	int k = m;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		m += a - b;
		if (m < 0) {
			k = 0;
			break;
		}
		if (m >= k) {
			k = m;
        }
	}
	cout << k;
}