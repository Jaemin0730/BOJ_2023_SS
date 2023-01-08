#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

bool func(int n)
{
	while (n)
	{
		if (n % 10 == 4 || n % 10 == 7) n /= 10;
		else return false;
	}
	return true;
}

int main(void)
{
    u
    int n, sol;
	cin >> n;
	for (int i = n; i >= 4; i--) {
		if (func(i))
		{
			sol = i;
			break;
		}
	}
	cout << sol;
}