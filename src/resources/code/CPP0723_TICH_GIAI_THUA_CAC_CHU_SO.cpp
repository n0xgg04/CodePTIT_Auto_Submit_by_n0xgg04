#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vll vector<ll>
#define tester() int t; cin >> t; while(t--)

int check(int n) {
    if (n == 2 || n == 3 || n == 5 || n == 7) return 1;
    return 0;
}

int n;
string s;
void run_test_case() {
    cin >> n >> s;
    int m[10] = {};
    for (int i = 0; i < s.size(); i++) {
        int x = s[i] - '0';
        if (check(x)) m[x]++;
        if (s[i] == '4') {
            m[2] += 2;
            m[3] ++;
        }
        if (s[i] == '6') {
            m[5] ++;
            m[3] ++; 
        }
        if (s[i] == '8') {
            m[7] ++;
            m[2] += 3;
        }
        if (s[i] == '9') {
            m[7] ++;
            m[2] ++;
            m[3] += 2;
        }
    }
    for (int i = 7; i >= 2; i--) {
        for (int j = 0; j < m[i]; j++) {
            cout << i;
        }
    }
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}