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
    int g[10]; //0~9
    char z[12]; //A~L
    int y = 0;
    for (int i = 0; i < 10; i++) {
        g[i] = i;
    }
    for (int i = 0; i < 12; i++) {
        z[i] = i + 65;
    }
    cin >> y;
    cout << z[((y +8) % 12)] << g[(y +6) % 10];
}