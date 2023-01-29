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
    cin >> s;
    int k = s.length();
    int a = 0, b = 0;
    for (int i=0; i < k/2; i++) {
        int t = s[i] - '0';
        a += t;
    }
    for (int i=k/2; i<k; i++) {
        int t = s[i] - '0';
        b += t;
    }
    if (a == b) {
        cout << "LUCKY";
    }
    else {
        cout << "READY";
    }
}