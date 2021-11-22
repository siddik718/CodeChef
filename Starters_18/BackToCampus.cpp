#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
void solve(){
    ll n,k;cin >> n >> k;
    cout << ceil((double)n/(double)k) << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int test;cin >> test;
    while(test--)solve();
    return 0;
}