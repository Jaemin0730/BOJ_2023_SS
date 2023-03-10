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
    while (n--) {
        string a, b, x, y;
        cin >> a >> b;
        x = a;
        y = b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (a == b) {
            cout << x << " & " << y << " are anagrams.\n";
        }
        else {
            cout << x << " & " << y << " are NOT anagrams.\n";
        }
    }
}