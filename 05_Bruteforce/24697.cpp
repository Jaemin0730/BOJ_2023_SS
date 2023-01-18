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
    int a, b, c, n, check = 0;
    cin >> a >> b >> c >> n;
    for (int k = 0; k < (n / c + 1); k++) {
        for (int i = 0; i < (n / b + 1); i++) {
            for (int j = 0; j < (n / a + 1); j++) {
                if ((k*c) + (i*b) + (j*a) == n)
                    check = 1;
            }
        }
    }
    cout << check;
}