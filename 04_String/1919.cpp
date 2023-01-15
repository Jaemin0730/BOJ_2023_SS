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
    string s1, s2;
	cin >> s1 >> s2;
	int cnt = 0, size1 = s1.size(), size2 = s2.size();
	for (int i = 0; i < size1; i++) {
		if (s1[i] == 0) break;
		for (int j = 0; j < size2; j++) {
			if (s2[j] == 0) {
                break;
            }
			if (s1[i] == s2[j]) {
				s1[i] = '0';
				s2[j] = '0';
			}
		}
	}
	for (int i = 0; i < size1; i++) {
		if (s1[i] != '0') cnt++;
	}
	for (int i = 0; i < size2; i++) {
		if (s2[i] != '0') cnt++;
	}
	
	cout << cnt;
}