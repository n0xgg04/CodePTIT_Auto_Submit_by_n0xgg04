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

string s, a;
void run_test_case() {
    getline(cin, s);
    cin >> a;
    stringstream ss(s);
    string token;
    while (ss >> token) {
        if (token != a) cout << token << " ";
    }
}

int main() {
    faster();
        run_test_case();
}