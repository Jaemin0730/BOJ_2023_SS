#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a%b);
}

int main(void)
{
    u
    int n, d, a[101] = {};
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    for(int i=1; i<n; i++) {
        if (a[0] < a[i]) {
            d = gcd(a[0], a[i]);
        }
        else {
            d = gcd(a[i], a[0]);
        }
        cout << a[0] / d << "/" << a[i] / d << "\n";
    }
}