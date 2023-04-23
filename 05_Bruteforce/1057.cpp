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
    int n;
	double k, i;
	cin >> n >> k >> i;
	int cnt = 0;
	while (k != i) {
		k = ceil(k / 2);
		i = ceil(i / 2);
		cnt++;
	}
	cout << cnt;
}