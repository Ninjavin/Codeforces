#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, h;
    cin >> n >> h;
    vector<int> dp(n);
    int count = 0;
    for(int i=0 ; i<n ; i++){
        cin >> dp[i];
        if(dp[i]>h){
            count++;
        }
    }
    cout<<n+count;

    return 0;
}