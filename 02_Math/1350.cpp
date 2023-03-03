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
    ll t, sol, cnt = 0;
    scanf("%d", &n);
    ll arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }
    scanf("%lld", &t);

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] <= t) {
            cnt++;
        }
        else if (arr[i] > t) {
            if (arr[i] % t == 0) cnt += arr[i] / t;
            else cnt += (arr[i] / t) + 1;
        }
    }
    sol = t * cnt;
    printf("%lld\n", sol);
}