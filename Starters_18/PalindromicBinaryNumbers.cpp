#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
vector <ll> x{1,3,5,7,9,15,17,21,27,31,33,45,51,63,65,73,85,93,99,107,119,127,129,153,165,189,195,219,231,255,257,273,297,313,325,341,365,381,387,403,427,443,455,471,495,511,513,561,585,633,645,693,717,765,771,819,843,891,903,951,975};
void solve(){
    ll n;cin >> n;
    vector <ll> ans;
    ll sum = 0;
    for(int i = 61;i>=0;i--){
        if(sum+x[i] <= n){
            sum += x[i];
            ans.push_back(x[i]);
            if(sum == n)break;
            i = 61;
        }
    }
    cout << ans.size() << '\n';
    for(auto it : ans)cout << it << ' ';
    cout << '\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int test;cin >> test;
    while(test--)solve();
    return 0;
}