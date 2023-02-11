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
    int s1, s2, s3, a[81] = {};
	cin >> s1 >> s2 >> s3;
	for (int i = 1; i <= s1; i++) {
		for (int j = 1; j <= s2; j++) {
			for (int k = 1; k <= s3; k++) {
				a[i + j + k]++;
            }
        }
    }
	int max = 0, sol = 0;
	for (int i = 1; i <= 80; i++) {
		if (a[i] > max) {
			max = a[i]; 
            sol = i;
        }
    }
	cout << sol;
}