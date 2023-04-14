/*
Solution by : spad1e
problem : SPOJ Wine trading in Gergovia
https://www.spoj.com/problems/GERGOVIA/en/
*/

#include<bits/stdc++.h>
//#include <grader.h>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define ll long long
#define ld long double
#define st first
#define nd second
#define pb push_back
#define INF INT_MAX
using namespace std;

ll ans;

void solve() {
    int n; cin >> n;
    if (n == 0) exit(0);
    ans = 0;
    ll sum = 0;
    for (int i = 1; i <= n; ++i) {
        int a; cin >> a;
        sum += a;
        ans += abs(sum);
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t = 1;
//    cin >> t;
    while (1) {
        solve();
    }
    return 0;
}
