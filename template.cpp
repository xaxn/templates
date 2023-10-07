// MDSPro
// #pragma GCC optimize("Ofast")
// #pragma GCC optimize ("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")

#include "bits/stdc++.h"

using namespace std;

using ll = long long;
using ld = long double;

const ld PI = 3.141592653589793;
const int MOD = 1e9+7;
const int INF = 1e9;
const ll INFLL = 4e18;
const double EPS = 1e-9;
const int MAXN = 1000*1007;

void solve(int NT){
    
}

#define TESTCASES
int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t = 1;
    #ifdef TESTCASES
        cin >> t;
    #endif
    
    for(int i = 1; i <= t; ++i){
        solve(i);
        cout << "\n";
    }
}