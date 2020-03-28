#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, m;
    cin >> n >> m;
    int x;
    int res = 0;
    for(int i=0 ; i<n ; i++){
        cin >> x;
        cout << (res+x)/m << " ";
        res = (res+x)%m ;
    }
    return 0;
}