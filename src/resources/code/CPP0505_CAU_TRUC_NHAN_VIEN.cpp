#include <bits/stdc++.h>
#include <stdexcept>
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

struct NhanVien {
	string msv = "00001", name, gender, dob, place, mst, date;
};

void nhap(NhanVien &a) {
	getline(cin, a.name);
	cin >> a.gender >> a.dob;
	cin.ignore();
	getline(cin, a.place);
	cin >> a.mst >> a.date;
}

void in(NhanVien a) {
	cout << a.msv << " " << a.name << " " << a.gender << " " << a.dob << " " << a.place << " " << a.mst << " " << a.date;	
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
