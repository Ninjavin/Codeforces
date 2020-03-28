#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> dp(n);
    for(int i=0 ; i<n ; i++){
        cin >> dp[i];
    }
    int sereja = 0;
    int dema = 0;
    for(int i=0 ; i<n ; i++){
        sereja = sereja + max(dp[i], dp[n-1-i]);
    }
    return 0;
}