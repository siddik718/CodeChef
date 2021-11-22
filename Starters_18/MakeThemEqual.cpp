#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
void solve(){
    ll n,mx = 0,mn = INT_MAX;
    cin >> n;
    for(int i = 0;i<n;i++){
        ll x;cin >> x;
        mx = max(mx,x);
        mn = min(mn,x);
    }
    cout << mx - mn << '\n';
}
int main(){
    int test;cin >> test;
    while(test--)solve();
    return 0;
}