#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

#define MAX 1000001

int n;
stack<int> s;
int a[MAX] = {}, sol[MAX] = {};

int main(void)
{
    u
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    for (int i=n-1; i>=0; i--) {
        while (!s.empty() && s.top() <= a[i]) {
            s.pop();
        }
        if (s.empty()) {
            sol[i] = -1;
        }
        else {
            sol[i] = s.top();
        }
        s.push(a[i]);
    }
    for (int i=0; i<n; i++) {
        cout << sol[i] << " ";
    }
}