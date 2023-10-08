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
#define MAX 1000000

string s;
void run_test_case() {
    cin >> s;
    int len = s.length();
    for (int i = len-1; i >= 1; i--) {
        if (s[i] < s[i-1]) {
            char curr = '0';
            int idx = i;
            for (int j = i; j < len; j++) {
                if (s[j] < s[i-1] && s[j] > curr) {
                    curr = s[j];
                    idx = j;
                }
            }
            swap(s[i-1], s[idx]);
            cout << s << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}