#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int n, m;

int main(void)
{
    u
    cin >> n >> m;
	string s = "";
	for (int i = 0; i < n; i++) {
		s += to_string(n);
	}
	if (s.length() > m) {
		cout << s.substr(0, m);
	}
	else {
		cout << s;
	}
}