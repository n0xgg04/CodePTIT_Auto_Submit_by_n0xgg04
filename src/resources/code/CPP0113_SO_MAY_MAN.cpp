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
    int l = s.size();
    if (s[l - 2] == '8' && s[l - 1] == '6') cout << "1" << endl;
    else cout << "0" << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}