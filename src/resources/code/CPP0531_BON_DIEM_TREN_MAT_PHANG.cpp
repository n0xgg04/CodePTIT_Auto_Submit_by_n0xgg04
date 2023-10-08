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

class Data {
    friend istream &operator>>(istream &in, Data &a) {
        cin >> a.x >> a.y >> a.z;
        return in;
    }

public:
    int x, y, z;
};

Data createVector(Data a, Data b) {
    Data c;
    c.x = b.x - a.x;
    c.y = b.y - a.y;
    c.z = b.z - a.z;

    return c;
}

void run_test_case() {
    Data a, b, c, d;
    Data vta, vtb, vtc;
    cin >> a >> b >> c >> d;

    vta = createVector(a, b);
    vtb = createVector(a, c);
    vtc = createVector(a, d);

    Data s;
    s.x = vta.y * vtb.z - vta.z * vtb.y;
    s.y = vta.z * vtb.x - vta.x * vtb.z;
    s.z = vta.x * vtb.y - vta.y * vtb.x;
    int ans = s.x * vtc.x + s.y * vtc.y + s.z * vtc.z;
    // cout << vtc.x << " " << vtc.y << " " << vtc.z << endl;
    if (ans == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}