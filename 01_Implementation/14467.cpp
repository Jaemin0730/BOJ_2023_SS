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
    int e, f, c, t = 0;        // t : 총 병의 개수
    cin >> e >> f >> c;
    int k = e + f;            // 빈 병의 개수
    while (k >= c)
    {
        t += k / c;           //빈 병을 탄산음료로 교환한다.
        k = k / c + k % c;  //교환한 탄산음료도 빈 병이 될 수 있으므로 이를 교환하고 남은 빈 병에 더해준다.
    }
    cout << t;
}