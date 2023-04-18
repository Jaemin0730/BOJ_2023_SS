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
    double w, h; 
    cin >> w >> h;
    double bmi = w / pow(h, 2);
    string s = "";
    if (bmi < 18.5) s = "Underweight";
    else if (bmi >= 18.5 && bmi < 25) s = "Normal weight";
    else if (bmi >= 25) s = "Overweight";
    cout << s;
}