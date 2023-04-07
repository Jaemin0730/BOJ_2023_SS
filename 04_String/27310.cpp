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
    cout << s.size() + count(s.begin(), s.end(), ':') + count(s.begin(), s.end(), '_') * 5;
}