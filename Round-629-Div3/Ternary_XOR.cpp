#include<bits/stdc++.h>
using namespace std;
int main(){

    long long test_cases;
    cin >> test_cases;
    while(test_cases--){
        long long x;
        cin >> x;
        int less=0, great=1;
        string dp;
        cin >> dp;
        vector<char> a(x);
        vector<char> b(x);
        for(long long i=0 ; i<x ; i++){
            if(dp[i] == '2'){
                if(less==0 && great==1){
                    a[i] = '1';
                    b[i] = '1';
                }
                else{
                    a[i] = '2';
                    b[i] = '0';
                    less = 1;
                    great = 0;
                }
            }
            if(dp[i] == '1'){
                if(less==0 && great==1){
                    a[i] = '0';
                    b[i] = '1';
                    great = 0;
                    less = 1;
                }
                else{
                    a[i] = '1';
                    b[i] = '0';
                    
                }
            }
            if(dp[i] == '0'){
                a[i] = '0';
                b[i] = '0';
            }
        }
        for(long long i=0 ; i<x ; i++){
            cout<<a[i];
        }
        cout<<"\n";
        for(long long i=0 ; i<x ; i++){
            cout<<b[i];
        }
        cout<<"\n";
    }

    return 0;
}