#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

priority_queue<int> pq;

int main(void)
{
    u
    int n, m, sol = 0;
    cin >> n >> m;
    n--;
    while (n--){
        int k;
        cin >> k;
        if (k >= m) {
            pq.push(k);
        }
    }
    
    while (!pq.empty() && pq.top() >= m){
        int t = pq.top(); 
        pq.pop();
        t--; 
        sol++; 
        m++;
        pq.push(t);
    }
    cout << sol << "\n";
}