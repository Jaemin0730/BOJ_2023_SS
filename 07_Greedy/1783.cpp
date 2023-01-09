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
    int n, m;
    cin >> n >> m;
    if (n == 1) {
        cout << 1;
    }
    else if (n == 2) {
        cout << min(4, (m + 1) / 2);
    }
    else if (m < 7) {
        cout << min(4, m);
    }
    else {
        cout << m - 2;
    }
}