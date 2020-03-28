#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test_cases;
    cin >> test_cases;
    while(test_cases--){
        long long a, b;
        cin >> a >> b;
        if(a%b==0)
            cout<<"0\n";
        else{
            cout<<b-a%b<<"\n";
        }
    }
    return 0;
}