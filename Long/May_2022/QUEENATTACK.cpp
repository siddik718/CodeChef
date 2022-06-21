#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x,y;cin >> n >> x >> y;
    long a,b,c,d,e,f,g,h,ans = 0;
    a = (x-1);b = (y-1);
    c = (n-x);d = (n-y);
    e = min(a,b); f = min(a,d);
    g = min(b,c);h = min(c,d);
    ans = a+b+c+d+e+f+g+h;
    cout << ans << endl;
}
int main(){
    int T;cin >> T;
    while(T--)solve();
    return 0;
}