#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin >> n;
    n = n*50;
    int a = n / 5;
    int b = n * 3 / 10;
    int ans = n - 2*a - b;
    cout << ans << endl;
}
int main(){
    int T;cin >> T;
    while(T--)solve();
    return 0;
}