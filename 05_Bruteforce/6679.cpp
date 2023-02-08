#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int C(int a, int b)
{
    int k = 0;
    while (a) {
        k += a % b, a /= b;
    }
    return k;
}

int main(void)
{
    u
    for (int i = 1000; i < 10000; i++) {
        int d = C(i, 10);
        if (d == C(i, 12) && d == C(i, 16))
            cout << i << "\n";
    }
}