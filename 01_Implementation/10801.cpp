#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int a[10] = {}, b[10] = {}, c[2] = {};

int main(void)
{
    u
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++) {
        cin >> b[i];
        if (a[i] > b[i]) {
            c[0]++;
        }
        else if (a[i] < b[i]) {
            c[1]++;
        }
        else {
            c[0]++;
            c[1]++;
        }
    }
    if (c[0] > c[1]) { 
        cout << "A" << '\n'; 
    }
    else if (c[0]==c[1]) { 
        cout << "D" << '\n'; 
    }
    else { 
        cout << "B" << '\n'; 
    }
}