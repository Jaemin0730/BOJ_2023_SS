#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int n,m,l;
int Cnt, cur;
int ball[1001];

int main(void)
{
    u
    cin >> n >> m >> l;
    ball[cur] = 1;
    while (ball[cur] != m){
        if (ball[cur] % 2) {
            cur = (cur+l) % n;
        }
        else {
            cur = (n+(cur-l)) % n;
        }
        ball[cur]++;
        Cnt++;
    }
    cout << Cnt;
}