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
#define tests int tt; cin >> tt;
#define run while(tt--)
#define files(a, b) freopen(a, "r", stdin); freopen(b, "w", stdout);

using namespace std;

template<typename T>
void printv(const std::vector<T>& vec) {
    for (const auto& elem : vec) {
        cout << elem << " ";
    }
    cout << endl;
}

template<typename T, size_t N>
void printa(const T (&arr)[N]) {
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