#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int GCD(int a, int b) {     // 최대공약수
    if (a % b == 0) {
        return b;
    }
    return GCD(b, a%b);
}

int LCM(int a, int b) {     // 최소공배수
    return a * b / GCD(a, b);
}

int main(void)
{
    u
    int t, m, n, x, y;
    cin >> t;
    while (t--) {
        cin >> m >> n >> x >> y;
        int k = LCM(m, n);  // 마지막 해
        while (1) {
            if (x > k || (x - 1) % n + 1 == y) { // 멸망년도 벗어나기 또는 x,y 만족 -> 종료
                break;
            }
            x += m;
        }
        // 결과 출력
        if (x > k) {
            cout << -1 << "\n";
        }
        else {
            cout << x << "\n";
        }
    }
}