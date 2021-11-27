#include<bits/stdc++.h>
#define FOR(i,n) for(int i = 0;i<(n);i++)
using namespace std;
using ll = long long int;
void solve(){
    string a;
    ll n;cin >> n >> a;
    int W = 0,B = 0;
    FOR(i,n){
        if(a[i] == 'W'){
            while(i<n && a[i] == 'W')i++;
            W++;
        }
    }
    FOR(i,n){
        if(a[i] == 'B'){
            while(i<n && a[i] == 'B')i++;
            B++;
        }
    }
    //cout << W << " " << B << "\n";
    cout << min(W,B) << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int test;cin >> test;
    while(test--)solve();
    return 0;
}