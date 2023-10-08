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

int n;
string s;
void run_test_case() {
    cin >> n;
    cin.ignore();
    map<string, int> mp;
    for (int i = 0; i < n; i++) {
        getline(cin, s);
        mp[s]++;
    }
    cout << mp.size();
}

int main() {
    faster();
        run_test_case();
}
