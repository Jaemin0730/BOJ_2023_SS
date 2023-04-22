#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

ll gcd(long long a, long long b) {
    return a % b ? gcd(b, a%b) : b; 
    }

int main(void)
{
    u
    ll a, b;
    cin >> a >> b;
    ll n = gcd(a, b);
    while (n--) {
        cout << "1";
    }
}