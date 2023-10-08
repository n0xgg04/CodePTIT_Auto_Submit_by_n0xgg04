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
    ll sum = 0;
    reverse(all(s));
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            if (i % 4 == 0) sum += 1;
            else if (i % 4 == 1) sum += 2;
            else if (i % 4 == 2) sum += 4;
            else if (i % 4 == 3) sum += 3;
        }
    }
    if (sum % 5 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}