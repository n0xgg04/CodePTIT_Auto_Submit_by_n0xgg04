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

class NhanVien {
public:
    string name, msv, gender, dob, address, mst, date;

    void nhap() {
        getline(cin, name);
        cin >> gender >> dob;
        cin.ignore();
        getline(cin, address);
        cin >> mst >> date;
    }

    void xuat() {
        cout << "00001 " << name << " " << gender << " " << dob << " " << address << " " << mst << " " << date;
    }
};

int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
