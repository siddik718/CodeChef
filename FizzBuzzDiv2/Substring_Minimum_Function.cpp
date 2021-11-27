#include<bits/stdc++.h>
#define FOR(i,n) for(int i = 0;i<(n);i++)
using namespace std;
using ll = long long int;
ll f(ll x){
    ll n = x;
    ll m = x+1;
    if(n&1)m/=2;
    else n/=2;
    return n*m;
}
void solve(){
    ll n,m,ans = 0;
    cin >> n >> m;
    ll zero = n-m;
    if(m == 0)ans = f(n);
    else if(m>=n/2)ans = zero;
    else{
        ll mx = ceil((double)zero/(double)(m+1));
        ll mn = zero/(m+1);
        if(zero < mx*(m+1)){
            ll d = mx*(m+1) - zero;
            ans = d*f(mn);
            ans += (m+1-d)*f(mx);
        }else{
            ans = f(mx)*(m+1);
        }
    }
    cout << ans << '\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int test;cin >> test;
    while(test--)solve();
    return 0;
}