#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;

#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vll vector<ll>
#define tester() int t; cin >> t; while(t--)

char a;
void run_test_case() {
    cin >> a;
    if (islower(a)) a -= 32;
    else a += 32;
    cout << a << endl;
}

int main() {
    tester() 
        run_test_case();
}