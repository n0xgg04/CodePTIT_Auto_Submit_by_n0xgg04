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
#define tester() int t; cin >> t; cin.ignore(); while(t--)

string s;
void run_test_case() {
    getline(cin, s);
    stringstream ss(s);
    string token;
    vector<string> v;
    while (ss >> token) {
        v.pb(token);
    }
    reverse(all(v));
    for (auto i:v) cout << i << " ";
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}

/*
2
I like this program very much
much very program this like I
*/