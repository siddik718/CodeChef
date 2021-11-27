#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
void solve(){
    ll x,y,k;
    cin >> x >> y >> k;
    if(x%k == 0 && y%k == 0){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int test;cin >> test;
    while(test--)solve();
    return 0;
}