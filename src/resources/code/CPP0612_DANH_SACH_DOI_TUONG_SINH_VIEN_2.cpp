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

class SinhVien {
    friend istream &operator>>(istream &input, SinhVien &a) {
        input.ignore();
        getline(input, a.name);
        input >> a.lop >> a.dob >> a.gpa;
        a.msv = to_string(idx++);
        a.msv.insert(0, 3 - a.msv.length(), '0');
        a.msv = "B20DCCN" + a.msv;
        a.dateOfBirth();
        a.standardName();
        return input;
    }

    friend ostream &operator<<(ostream &output, SinhVien a) {
        output << a.msv << " " << a.name << a.lop << " " << a.dob << " ";
        output << fixed << setprecision(2);
        output << a.gpa << endl;
        return output;
    }

public:
    string msv, name, lop, dob;
    float gpa;

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


int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}