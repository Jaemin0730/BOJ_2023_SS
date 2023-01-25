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
    int n, k;
    cin >> n >> k;
    int a[n+1] = {}, dp[k+1] = {};
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    dp[0] = 1;
    for (int i=0; i<n; i++) {
        for (int j=a[i]; j <= k; j++) {
            dp[j] += dp[j - a[i]];
        }
    }
    cout << dp[k];
}