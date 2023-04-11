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
    cin >> s;
    if (s == "NLCS") cout << "North London Collegiate School";
    else if (s == "BHA") cout << "Branksome Hall Asia";
    else if (s == "KIS") cout << "Korea International School";
    else cout << "St. Johnsbury Academy";
}