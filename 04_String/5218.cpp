#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int t;
string a, b;

int main(void)
{
    u
    
    cin >> t;
    while (t--) {
        cin >> a >> b;
        int *v = new int[a.size()];
        for (int i = 0; i < a.size(); i++) {
            if (b[i] >= a[i]) {
                v[i] = b[i] - a[i];
            }
            else if (b[i] < a[i]) {
                v[i] = b[i] + 26 - a[i];
            }
        }
        cout << "Distances: ";
        for (int i = 0; i < a.size(); i++) {
            cout  << v[i] << " ";
        }
        cout << "\n";
    }
}