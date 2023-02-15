#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

int sum = 0, p = 0, cnt = 0;

int main(void)
{
    u
    string k, s;
    cin >> k;
    for (int i = 0; i < k.size(); i++)
    {
        if (k[i] == ',') {
            sum += stoi(s); 
            s = "";
        }
        else {
            s += k[i];
        }
    }
    cout << sum + stoi(s);
}