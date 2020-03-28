#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        long long n, s, t;
        cin >> n >> s >> t;
        cout << max(n-s,n-t) + 1 <<"\n";
    }
    return 0;
}