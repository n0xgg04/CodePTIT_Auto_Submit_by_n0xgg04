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

string dapan1 = "ABBADCCABDCCABD";
string dapan2 = "ACCABCDDBBCDDBB";
int n;
void run_test_case() {
    cin >> n;
    string s;
    char a;
    for (int i = 0; i < 15; i++) {
        cin >> a;
        s.pb(a);
    }
    int cnt = 0;
    for (int i = 0; i < 15; i++) {
        if (n == 101) {
            if (s[i] == dapan1[i]) cnt++;
        }
        else {
            if (s[i] == dapan2[i]) cnt++;
        }
    }
    cout << fixed << setprecision(2) << 10.0 * cnt / 15 << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}