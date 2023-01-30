#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int a, b, c, sol = 0;
int t[101];

int main(void)
{
    u
    cin >> a >> b >> c;
    for (int i = 0; i < 3; i++){
        int x, y;
        cin >> x >> y;
        for (int j = x; j < y; j++) {
            t[j]++;
        }
    }
    for (int i = 1; i <= 100; i++){
        if (t[i] == 1) {
            sol += t[i] * a;
        }
        else if (t[i] == 2) {
            sol += t[i] *b;
        }
        else sol += t[i] * c;
    }
    cout << sol;
}