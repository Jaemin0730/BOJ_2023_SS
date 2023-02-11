#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int n, c = 0, m = 0,  a[50];

int main(void)
{
    u
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (m < a[i]) {
            m = a[i];
            c++;
        }
    }
    cout << c << "\n";
    c = 0; 
    m = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (m < a[i]) {
            m = a[i];
            c++;
        }
    }
    cout << c;
}