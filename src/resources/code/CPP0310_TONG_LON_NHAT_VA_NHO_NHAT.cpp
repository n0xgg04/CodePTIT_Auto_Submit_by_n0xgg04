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

string a, b;
void run_test_case() {
    cin >> a >> b;

    for (auto &i:a) {
        if (i == '6') i = '5';
    }
    for (auto &i:b) {
        if (i == '6') i = '5';
    }
    cout << stoll(a) + stoll(b) << " ";
    for (auto &i:a) {
        if (i == '5') i = '6';
    }
    for (auto &i:b) {
        if (i == '5') i = '6';
    }
    cout << stoll(a) + stoll(b) << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}