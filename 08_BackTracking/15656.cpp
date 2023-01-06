#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int N, M;
int a[7];
int visited[7];

void func(int k)
{
	if (k == M)
	{
		for (int i = 0; i < M; i++)
		{
			cout << a[visited[i]] << " ";
		}
		
		cout << "\n";

		return;
	}

	for (int i = 0; i < N; i++)
	{
		visited[k] = i;

		func(k + 1);
	}
}

int main(void)
{
    u
    cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	sort(a, a + N);
    func(0);
}