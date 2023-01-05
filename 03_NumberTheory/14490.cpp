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
	if (a % b == 0) {
		return b;
	}
	return gcd(b, a%b);
}

int main(void)
{
    u
    string s;
	cin >> s;
	int a = 0, b = 0, d = 1;
	bool flag = true;
	for (int i = s.length()-1; i >=0; i--) {
		if (s[i] == ':') {
			d = 1;
			flag = false;
		}
		else {
			if (flag) {
				b += (s[i] - '0') * d;
				d *= 10;
			}
			else {
				a += (s[i] - '0') * d;
				d *= 10;
			}
		}
	}
	int igcd = gcd(a, b);
	cout << a / igcd << ":" << b / igcd;
}