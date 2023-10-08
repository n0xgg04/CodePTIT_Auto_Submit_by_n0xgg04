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

class PhanSo {
    friend istream &operator>>(istream &input, PhanSo &a) {
        input >> a.tu >> a.mau;
        return input;
    }

    friend ostream &operator<<(ostream &output, PhanSo a) {
        output << a.tu << "/" << a.mau;
        return output;
    }

public:
    ll tu, mau;
    PhanSo(ll tu, ll mau) {
        this->tu = tu;
        this->mau = mau;
    }

    void rutgon() {
        ll x = __gcd(tu, mau);
        tu /= x;
        mau /= x;
    }
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}