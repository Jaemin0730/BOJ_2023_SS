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
    string s;
    
    for (int i=0; i<3; i++) {
        cin >> s;
        int cnt = 1;  
        int max = 1;
        for (int i = 0; i<s.length()-1; i++) {
            if (s[i] == s[i+1]) {   
                cnt++;
                if (cnt > max) {
                    max = cnt;
                }
            }
            else{
                cnt = 1; 
            }           
        }
        cout << max << "\n";
    }
}