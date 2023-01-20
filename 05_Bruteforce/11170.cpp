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
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        int a, b, cnt = 0, sum = 0;
        cin >> a >> b;
        for (int i = a; i <= b; i++){
            string s = to_string(i); 
            for (int j=0; j < s.length(); j++){
                if (s[j] == '0'){
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }
}