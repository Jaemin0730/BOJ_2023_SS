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
	cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (prev_permutation(a.begin(),a.end())) {
		for (int i = 0; i < n ; i++) {
			cout << a[i] << " ";
		}
	}
	else {
		cout << "-1";
	}
}