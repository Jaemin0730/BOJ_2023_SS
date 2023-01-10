#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;
#define MAX 1000000000

int main(void)
{
    u
    ll x, y;
    cin >> x >> y;
    int z = (y * 100) / x;
    if (z >= 99) {
        cout << -1 << "\n";
        return 0;
    }
    int low = 0, high = MAX;
    int sol = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        int temp = (100 * (y + mid)) / (x + mid);
        if (z >= temp) {
            sol = mid + 1;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    cout << sol << "\n";
}