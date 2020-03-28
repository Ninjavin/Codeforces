#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    vector<int> dp(n);
    long long count_1 = 0;
    long long count_2 = 0;
    for(long long i=0 ; i<n ; i++){
        cin >> dp[i];
        if(dp[i] == 1)
            count_1++;
        else
            count_2++;
    }
    
    return 0;
}