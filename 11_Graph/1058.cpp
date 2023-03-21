#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

#define INF 987654321
#define MAX 511

int arr[MAX][MAX];
int n, sol;

int main(void)
{
    u
    cin >> n;
    for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
            arr[i][j] = INF;
		}
    }
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        for (int j = 0; j < s.size(); j++){
            if (s[j] == 'Y') {
                arr[i][j] = 1;
            }
        }
    }
    for (int k = 0; k < n; k++){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (arr[i][j] > arr[i][k] + arr[k][j]){
                    arr[i][j] = arr[i][k] + arr[k][j];
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (i == j) {
                continue;
            }
            if (arr[i][j] <= 2 ) {
                cnt++;
            }
        }
        sol = max(sol, cnt);
    }
    cout << sol;
}