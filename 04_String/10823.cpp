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
    string s;
	string temp;
	int sol = 0;
	while (getline(cin, s)) {
		for (int i = 0; i < s.size(); i++) {
			if (s[i] != ',') {
                temp += s[i];
            }
			else {
				sol += stoi(temp);
				temp = "";
			}
		}
	}
	sol += stoi(temp);
	cout << sol;
}