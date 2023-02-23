#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL);
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

#define MAX 1000000001

int n;
int v[11]; // 수열 
int k[4];  // 연산자의 개수 (+ - * /)
int mmin = MAX;
int mmax = -MAX;

void BackTracking(int a, int b) {   //a: 연산을 하고자 하는 정수, b: 몇번째 정수인지 나타내는 번호
    if (b == n) {
        if (a > mmax) {
            mmax = a;
        }
        if (a < mmin) {
            mmin = a;
        }
        return;
    }
    for (int i = 0; i < 4; i++) {
        if (k[i] > 0) {
            k[i]--; // 연산자 하나 사용했으므로 1개 줄여줌
            if (i == 0) BackTracking(a + v[b], b + 1);           // + 더하기
            else if (i == 1) BackTracking(a - v[b], b + 1);      // - 빼기
            else if (i == 2) BackTracking(a * v[b], b + 1);      // * 곱하기
            else BackTracking(a / v[b], b + 1);                  // / 나누기
            k[i]++; //  백트래킹 이후 다른 연산자 사용하고자 함 ->  해당 연산자 횟수를 늘려줌!
        }
    }
    return;
}

int main(void)
{
    u
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < 4; i++) {
        cin >> k[i];
    }
    BackTracking(v[0], 1);
    cout << mmax << '\n' << mmin;
}