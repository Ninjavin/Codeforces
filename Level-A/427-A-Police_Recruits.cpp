#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<int> dp(n);
    int sum=0;
    int result = 0;
    for(int i=0 ; i<n ; i++){
        cin >> dp[i];
        if(sum==0 && dp[i]<0){
            result++;
        }
        else{
            sum = sum + dp[i];
        }
    }
    cout<<result;
    return 0;
}