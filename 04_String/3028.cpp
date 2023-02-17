#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

string s;
int a[3] = { 1,0,0 };

int main(void)
{
    u
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        switch (s[i]) {
        case 'A':
            swap(a[0], a[1]);
            break;
        case 'B':
            swap(a[1], a[2]);
            break;
        case 'C':
            swap(a[0], a[2]);
            break;
        }
    }
    for (int i = 0; i < 3; i++) {
        if (a[i] == 1) { 
            cout << i + 1 << '\n'; break; 
        }
    }
}