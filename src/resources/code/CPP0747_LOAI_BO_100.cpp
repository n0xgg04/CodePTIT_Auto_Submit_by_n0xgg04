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
    int len = s.size();
    for (int i = 0; i < s.size() - 2; i++) {
        if (s == "") break;
        if (s[i] == '1' && s[i+1] == '0' && s[i+2] == '0') {
            s.erase(s.begin() + i, s.begin() + i + 3);
            i -= 2;
        }
    }
    if (len - s.size() == 0) {
        cout << endl; // Doc cmt de hieu tai sao lai code nnay :v
        return;
    }
    cout << len - s.size() << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}