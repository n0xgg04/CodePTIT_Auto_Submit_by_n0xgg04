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

struct SinhVien {
    string msv, name, lop, dob;
    float gpa;
};

void nhapThongTinSV(SinhVien &a) {
    getline(cin, a.name);
    cin >> a.lop >> a.dob >> a.gpa;

    a.msv = "N20DCCN001";
    if (a.dob[1] == '/') a.dob.insert(0, "0");
    if (a.dob[4] == '/') a.dob.insert(3, "0");
}

void inThongTinSV(SinhVien a) {
    cout << a.msv << " " << a.name << " " << a.lop << " " << a.dob << " ";
    cout << fixed << setprecision(2);
    cout << a.gpa;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}