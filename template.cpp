#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <array>
#include <algorithm>
#include <stack>
#include <queue>
#include <iomanip>
#include <string>
#include <math.h>
#include <iomanip>

#define endl "\n"
#define REP(x, n) for(int i = x; i < n; ++i)
#define F first
#define S second
#define PB push_back
#define MK make_pair
#define tests int tt; cin >> tt;
#define run while(tt--)
#define files(a, b) freopen(a, "r", stdin); freopen(b, "w", stdout);

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef set<int> si;
typedef map<int,int> mpi;

template<typename T>
void printv(const std::vector<T>& vec) {
    using namespace std;
    cout << "Vector: ";
    for (const auto& elem : vec) {
        cout << elem << " ";
    }
    cout << endl;
}

template<typename T, size_t N>
void printa(const T (&arr)[N]) {
    using namespace std;
    cout << "Array: ";
    for (const auto& elem : arr) {
        cout << elem << " ";
    }
    cout << endl;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    
    return 0;
}