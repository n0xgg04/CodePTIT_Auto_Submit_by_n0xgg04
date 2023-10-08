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
    string name, lop, dob, msv = "B20DCCN001 ";
    float gpa;

    void standardDob() {
        if (dob[1] == '/') dob.insert(0, "0");
        if (dob[4] == '/') dob.insert(3, "0");
    }
};

void nhap(SinhVien &a) {
    getline(cin, a.name);
    cin >> a.lop >> a.dob >> a.gpa;
    a.standardDob();
}
void in(SinhVien a) {
    cout << a.msv << a.name << " " << a.lop << " " << a.dob << " ";
    printf("%.2f", a.gpa);
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}