#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> dp(n);
    
    for(int i=0 ; i<n ; i++){
        cin >> dp[i];
    }
    sort(dp.begin(), dp.end());
    for(int i=0 ; i<n ; i++){
        cout<<dp[i]<<" ";
    }
    return 0;
}