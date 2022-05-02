#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
void solve(){
    int n;cin >> n;
    int a[n];
    for(int i = 0;i<n;i++)cin >> a[i];
    sort(a,a+n);
    int f = 1;
    for(int i = 1;i<n-1;i++){
        int x = a[i]-a[i-1];
        int y = a[i+1]-a[i];
        if((x*2!=y)&&(x!=2*y)){
            f = 0;
            break;
        }
    }
    cout << (f ? "Yes\n" : "No\n");
}
int main(){
    int T;cin >> T;
    while(T--)solve();
    return 0;
}