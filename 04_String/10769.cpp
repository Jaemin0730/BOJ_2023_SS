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
    int happy = 0, sad = 0;
    getline(cin, s);
    for (int i = 0; i < s.size() - 2; i++) {
        if (s[i] == ':' && s[i + 1] == '-') {
            if (s[i + 2] == ')') {
                happy++;
            }
            else {
                sad++;
            }
        }
    }
    if (happy == 0 && sad == 0) {
        cout << "none\n";
    }
    else if (happy == sad && happy) {
        cout << "unsure\n";
    }
    else {
        cout << (happy > sad ? "happy" : "sad");
    }
}