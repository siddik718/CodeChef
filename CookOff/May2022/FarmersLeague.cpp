#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
void solve(){
    ll n;cin >> n;
    ll a = (n-1)*3;
    ll b = (n-1)/2;
    b = b*3;
    ll diff = a-b;
    cout << diff << endl;
}
int main(){
    int T;cin >> T;
    while(T--)solve();
    return 0;
}