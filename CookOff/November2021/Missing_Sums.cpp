#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main(){
    int test;cin >> test;
    for(int i = 1;i<=test;i++){
        int n;cin >> n;
        ll x = 1;
        for(int j = 1;j<=n;j++){
            cout << x << " \n"[j==n];
            x += 2;
        }
    }
    return 0;
}