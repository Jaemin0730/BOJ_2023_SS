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
    cin >> n;
    int sol = 0;
    for(int i = 0; i < 3; i++){
        int x;
        cin >> x;
        sol += x > n ? n : x;
    }
    cout << sol;
}