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

int idx = 1;
struct NhanVien {
    string mnv, name, gender, dob, address, mst, date;
};

void nhap(NhanVien &a) {
    cin.ignore();
    getline(cin, a.name);
    cin >> a.gender >> a.dob;
    cin.ignore();
    getline(cin, a.address);
    cin >> a.mst >> a.date;

    string s = to_string(idx++);
    s.insert(0, 5 - s.length(), '0');
    a.mnv = s;
}

void in(NhanVien a) {
    cout << a.mnv << " " << a.name << " " << a.gender << " " << a.dob << " " << a.address << " " << a.mst << " " << a.date << endl;
}

void inds(NhanVien a[], int n) {
    for (int i = 0; i < n; i++) {
        in(a[i]);
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}