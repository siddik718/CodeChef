#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
void solve(){
    int n;cin >> n;
    if(n == 2 || n == 3)n--;
    cout << n << "\n";
}
int main(){
    int T;cin >> T;
    while(T--)solve();
    return 0;
}