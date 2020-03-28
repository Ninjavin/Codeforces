#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int a[3], n;
        cin >> a[0] >> a[1] >> a[2] >> n;
        sort(a, a+3);
        int s = (2*a[2])-a[1]-a[0];
        if(n<s || ((n-s)%3!=0)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}