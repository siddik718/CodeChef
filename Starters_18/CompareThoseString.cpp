#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
void solve(){
    ll n,ans = 0;
    string a,b;
    cin >> n >> a >> b;
    bool ok = false;
    if(a[n-1] < b[n-1]){
        ok = true;
        ans++;
    }
    for(int i = n-2;i>=0;i--){
        if(a[i] < b[i]){
            ok = true;
            ans++;
        }else if(a[i]>b[i]){
            ok = false;
        }else{
            if(ok)ans++;
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