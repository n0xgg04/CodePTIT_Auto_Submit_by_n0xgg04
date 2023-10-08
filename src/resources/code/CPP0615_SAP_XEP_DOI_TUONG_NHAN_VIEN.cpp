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

class NhanVien {
    friend istream &operator>>(istream &input, NhanVien &a) {
        scanf("\n");
        getline(input, a.name);
        input >> a.gender >> a.dob;
        scanf("\n");
        getline(input, a.adress);
        input >> a.mst >> a.date;

        a.mnv = to_string(idx++);
        a.mnv.insert(0, 5 - a.mnv.length(), '0');

        a.dateOfBirth();
        a.standardName();

        return input;
    }

    friend ostream &operator<<(ostream &output, NhanVien a) {
        output << a.mnv << " " << a.name << a.gender << " " << a.dob << " " << a.adress << " " << a.mst << " " << a.date << endl;
        return output;
    }

public:
    string mnv, name, gender, dob, adress, mst, date;

    void dateOfBirth() {
        if (dob[1] == '/') dob.insert(0, "0");
        if (dob[4] == '/') dob.insert(3, "0");
    }

    void standardName() {
        for (auto &i:name) {
            if (i >= 'A' && i <= 'Z') i += 32;
        }
        stringstream ss(name);
        string token, final = "";
        while (ss >> token) {
            token[0] -= 32;
            final += token + " ";
        }
        name = final;
    }
};

bool cmp(NhanVien a, NhanVien b) {
    string aYear = a.dob.substr(6);
    string bYear = b.dob.substr(6);
    string aDay = a.dob.substr(3, 2);
    string bDay = b.dob.substr(3, 2);
    string aMonth = a.dob.substr(0, 2);
    string bMonth = b.dob.substr(0, 2);

    if (aYear == bYear) {
        if (aMonth == bMonth) return aDay < bDay;
        return aMonth < bMonth;
    }
    return aYear < bYear;
}

void sapxep(NhanVien a[], int n) {
    sort(a, a + n, cmp);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}