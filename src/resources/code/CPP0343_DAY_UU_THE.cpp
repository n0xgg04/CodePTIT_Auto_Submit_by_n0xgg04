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

void run_test_case() {
    scanf("\n");
    int even = 0, odd = 0, size = 0;
    do
    {
        int n;
        cin >> n;
        ++size;
        if (n % 2 == 0)
            even++;
        else
            odd++;
    } while (getchar() != '\n');
    if (size % 2 == 0 && even > odd)
        cout << "YES\n";
    else if (size % 2 == 1 && odd > even)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    faster();
    tester() 
        run_test_case();
}

/*
2
11 22 33 44 55 66 77
23 34 45 56 67 78 89 90 121 131 141 151 161 171
*/