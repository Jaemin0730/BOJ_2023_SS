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
    int a, b;
    cin >> a >> b;
    if (a == b) {
        cout << 0;
    }
    else if (a > b) {
        cout << 1;
    }
    else if (a < b) {
        cout << -1;
    }
}