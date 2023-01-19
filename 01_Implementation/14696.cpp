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
    int n, an, bn;
	cin >> n;
	while (n--)
	{
		int tmp, a[5] = {}, b[5] = {};
		cin >> an;
		for (int i = 0; i < an; i++)
		{
			cin >> tmp;
			a[tmp]++;
		}
		cin >> bn;
		for (int i = 0; i < bn; i++)
		{
			cin >> tmp;
			b[tmp]++;
		}
		int k = 4;
		int w = 0;
		for (int i = 4; i >= 1; i--)
		{
			if (a[i] > b[i])
				w = 1;
			else if (a[i] < b[i])
				w = 2;
			if (w != 0)
				break;
		}
		if (w == 0)
			cout << "D\n";
		else if (w == 1)
			cout << "A\n";
		else if (w == 2)
			cout << "B\n";
	}
}