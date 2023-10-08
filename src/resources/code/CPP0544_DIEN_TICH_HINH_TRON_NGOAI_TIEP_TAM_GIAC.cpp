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
#define PI 3.141592653589793238

struct Data {
    db x, y;

    void nhap() {
        cin >> x >> y;
    }
};

db khoangCach(Data a, Data b) {
    db s = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
    return s;
}

Data a, b, c;
void run_test_case() {
    a.nhap();
    b.nhap();
    c.nhap();

    db s1 = khoangCach(a, b), s2 = khoangCach(a, c), s3 = khoangCach(b, c);

    if (s1 + s2 <= s3 || s2 + s3 <= s1 || s1 + s3 <= s2) {
        cout << "INVALID" << endl;
        return;
    }

    db p = (s1 + s2 + s3) / 2;
    db S = sqrt(p * (p - s1) * (p - s2) * (p - s3));

    db R = s1 * s2 * s3 / (4 * S);
    db ans = PI * R * R;
    cout << fixed << setprecision(3) << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}