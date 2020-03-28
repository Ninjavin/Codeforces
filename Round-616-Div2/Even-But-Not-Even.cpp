#include<bits/stdc++.h>
using namespace std;
int sum_of_digits(int n){
    int sum=0;
    while(n){
        sum = n%10 + sum;
        n=n/10;
    }
    return sum;
}
int main(){
    int test_cases;
    cin >> test_cases;
    while(test_cases--){
        int n;
        cin>>n;
        string s;
        cin >> s;
        int no_of_odd = 0;
        for(auto c: s){
            if((c-'0')%2 != 0){
                no_of_odd++;
            }
        }
        if(no_of_odd<=1){
            cout<<"-1"<<endl;
        }
        else{
            int count=0;
            for(auto c: s){
                if((c-'0')%2!=0 && count!=2){
                    cout<<c;
                    count++;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}