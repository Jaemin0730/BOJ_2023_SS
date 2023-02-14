#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int n, arr[26] = {};
bool tf;
string s1, s2;

int main(void)
{
    u
    
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s1 >> s2;
		tf = true;
		fill(arr, arr + 26, 0);
		for (int j = 0; j < s1.length(); j++) {
			arr[s1[j] - 'a']++;
			arr[s2[j] - 'a']--;
		}
		for (int j = 0; j < 26; j++) {
			if (arr[j] != 0) {
				tf = false;
				break;
			}
		}
		if (tf) {
            cout << "Possible\n";
        }
		else {
            cout << "Impossible\n";
        }
	}
}