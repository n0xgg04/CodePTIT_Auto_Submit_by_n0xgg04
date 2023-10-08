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

string s;
void run_test_case() {
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        int cnt = 1;
        while (s[i+1] == s[i]) {
            cnt++;
            i++;
        }
        cout << s[i] << cnt;
    }
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}